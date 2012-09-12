/**
 * @file cursor.c
 * @author Albert Huang aka alberthrocks <alberthrocks.public@gmail.com>
 * @author Julian Mackeben aka compu <compujuckel@googlemail.com>
 * @version 2.0
 *
 * @section LICENSE
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301  USA
 *
 * @section DESCRIPTION
 *
 * Cursor functions
 */
#include <os.h>
#include "nspireio2.h"
#define CHAR_WIDTH 6
#define CHAR_HEIGHT 8
inline unsigned get_current_time() {
    return *(volatile unsigned*)0x90090000;
}

void nio_DrawCursor(nio_console* c)
{
	char color = c->color[c->cursor_y*c->max_x+c->cursor_x];
	
	char foreground_color = color & 0x0F;
	if((c->drawing_enabled) && (c->cursor_enabled)) {
		if (!((c->cursor_type >= 0) && (c->cursor_type <= 3))) {
			// Set the cursor type to a valid one
			c->cursor_type = 0;
		}
		
		int i, j;
		
		if (c->cursor_type == 0) {
			// Draw a box for the cursor
			for(i = 0; i < CHAR_WIDTH; i++)
			{
				for(j = CHAR_HEIGHT; j > 0; j--)
				{
					nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j, foreground_color);
				}
			}
		} else if (c->cursor_type == 1) {
			// Draw a horizontal underline (underscore) for the cursor
			
			// Sanity check for cursor_line_width
			if (!((c->cursor_line_width > 0) && (c->cursor_line_width <= CHAR_HEIGHT))) {
				// Set the cursor width to 1 (regular cursor width)
				c->cursor_line_width = 1;
			}
			
			// Draw it!
			for(i = 0; i < CHAR_WIDTH; i++)
			{
				//for(j = CHAR_HEIGHT; j > (CHAR_HEIGHT - c->cursor_line_width); j--)
				for(j = 0; j < c->cursor_line_width; j++)
				{
					nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j-1, foreground_color);
				}
			}
		} else if (c->cursor_type == 2) {
			// Draw a vertical bar for the cursor
			
			// Sanity check for cursor_line_width
			if (!((c->cursor_line_width > 0) && (c->cursor_line_width <= CHAR_WIDTH))) {
				// Set the cursor width to 1 (regular cursor width)
				c->cursor_line_width = 1;
			}
			
			// Draw it!
			for(i = 0; i < c->cursor_line_width; i++) {
				for(j = CHAR_HEIGHT; j > 0; j--)
				{
					nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j, foreground_color);
				}
			}
		} else if (c->cursor_type == 3) {
			// Draw a custom cursor
			// This uses pretty much the same code as the regular character drawing
			
			char background_color = (color & 0xF0) >> 4;
			
			// Sanity check to make sure the user defined something for the character
			if (c->cursor_custom_data == NULL) {
				// Set the cursor to a full cursor
				int p;
				for(p = 0; p <= 5; p++)
					c->cursor_custom_data[p] = 0xFF;
			}
			
			// Draw it!
			int pixelOn;
			for(i = 0; i < CHAR_WIDTH; i++)
			{
				for(j = CHAR_HEIGHT; j > 0; j--)
				{
					pixelOn = c->cursor_custom_data[i];
					pixelOn = pixelOn & 0x80 ;
					if (pixelOn) 		nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j,foreground_color);
					else if(!pixelOn) 	nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j,background_color);
				}
			}
		}
	}
}

void nio_EraseCursor(nio_console* c)
{
	char color = c->color[c->cursor_y*c->max_x+c->cursor_x];
	
	char background_color = (color & 0xF0) >> 4;
	
	// Draw a box for the cursor
	if((c->drawing_enabled) && (c->cursor_enabled)) {
		int i, j;
		for(i = 0; i < CHAR_WIDTH; i++)
		{
			for(j = CHAR_HEIGHT; j > 0; j--)
			{
				nio_pixel_set((c->cursor_x*CHAR_WIDTH)+i,(c->cursor_y*CHAR_HEIGHT)+CHAR_HEIGHT-j, background_color);
			}
		}
		nio_csl_drawchar(c,c->cursor_x,c->cursor_y);
	}
}

void nio_DrawBlinkingCursor(nio_console* c)
{
	if (!c->cursor_blink_enabled) return;
	if (c->cursor_blink_timestamp == 0) c->cursor_blink_timestamp = get_current_time();
	if (c->cursor_blink_duration == 0) c->cursor_blink_duration = 1;
	
	if ((get_current_time() - c->cursor_blink_timestamp) >= c->cursor_blink_duration) {
		if (c->cursor_blink_status)
			nio_DrawCursor(c);
		else
			nio_EraseCursor(c);
		c->cursor_blink_status = !c->cursor_blink_status;
		c->cursor_blink_timestamp = get_current_time();
	}
}

void nio_ResetBlinkingCursor(nio_console* c)
{
	if (!c->cursor_blink_enabled) return;
	c->cursor_blink_timestamp = get_current_time();
}

void nio_EnableCursor(nio_console* c, BOOL enable_cursor)
{
	c->cursor_enabled = enable_cursor;
	if (!enable_cursor)
		nio_EraseCursor(c);
	else
		nio_DrawCursor(c);
}

void nio_EnableCursorBlink(nio_console* c, BOOL enable_cursor_blink)
{
	c->cursor_blink_enabled = enable_cursor_blink;
	if (!enable_cursor_blink) nio_DrawCursor(c);
}

void nio_SetCursorBlinkDuration(nio_console* c, int duration)
{
	c->cursor_blink_duration = (unsigned) duration;
}

void nio_SetCursorType(nio_console* c, int cursor_type)
{
	if (!((c->cursor_type >= 0) && (c->cursor_type <= 3))) {
		// Set the cursor type to a valid one
		cursor_type = 0;
	}
	c->cursor_type = cursor_type;
}

void nio_SetCursorWidth(nio_console* c, int cursor_width)
{
	c->cursor_line_width = cursor_width;
}

void nio_SetCursorCustom(nio_console* c, unsigned char cursor_data[6])
{
	int i;
	for(i = 0; i <= 5; i++) {
		c->cursor_custom_data[i] = cursor_data[i];
	}
	//memcpy(c->cursor_custom_data, cursor_data, sizeof(cursor_data));
}