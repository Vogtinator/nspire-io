/**
 * @file charmap.h
 * @author  Manfred Becker <mani.becker@web.de>
 * @version 0.1
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * http://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * This file contains all characters.
 */
 
#ifndef CHARMAP2_H
#define CHARMAP2_H

#define CHAR_WIDTH 6
#define CHAR_HEIGHT 8

const char MBCharSet8x6_definition[256][6] = {
/*000*/ {0x00,0x49,0x7A,0x40,0x00,0x00},
/*001*/ {0x04,0x1E,0x1F,0x1E,0x04,0x00},
/*002*/ {0x1C,0x1C,0x3E,0x1C,0x08,0x00},
/*003*/ {0x10,0x3C,0x7C,0x3C,0x10,0x00},
/*004*/ {0x08,0x1C,0x3E,0x1C,0x1C,0x00},
/*005*/ {0x30,0x48,0x45,0x40,0x20,0x00},
/*006*/ {0x20,0x55,0x56,0x54,0x78,0x00},
/*007*/ {0x7E,0x71,0x49,0x47,0x3F,0x00},
/*008*/ {0x78,0x64,0x54,0x4C,0x3C,0x00},
/*009*/ {0x38,0x45,0x46,0x44,0x38,0x00},
/*010*/ {0x38,0x42,0x44,0x40,0x38,0x00},
/*011*/ {0x7A,0x09,0x12,0x24,0x7A,0x00},
/*012*/ {0x4C,0x52,0x32,0x12,0x12,0x00},
/*013*/ {0x38,0x56,0x55,0x56,0x18,0x00},
/*014*/ {0x7C,0x54,0x56,0x55,0x44,0x00},
/*015*/ {0x38,0x54,0x56,0x55,0x18,0x00},
/*016*/ {0x38,0x55,0x56,0x54,0x18,0x00},
/*017*/ {0x7E,0x09,0x7F,0x49,0x49,0x00},
/*018*/ {0x24,0x54,0x7C,0x54,0x58,0x00},
/*019*/ {0x78,0x14,0x15,0x14,0x78,0x00},
/*020*/ {0x20,0x54,0x55,0x54,0x78,0x00},
/*021*/ {0x78,0x15,0x14,0x15,0x78,0x00},
/*022*/ {0x20,0x55,0x54,0x55,0x78,0x00},
/*023*/ {0x3C,0x43,0x42,0x43,0x3C,0x00},
/*024*/ {0x38,0x45,0x44,0x45,0x38,0x00},
/*025*/ {0x3C,0x41,0x40,0x41,0x3C,0x00},
/*026*/ {0x38,0x42,0x40,0x42,0x38,0x00},
/*027*/ {0x03,0x3B,0x44,0x44,0x44,0x00},
/*028*/ {0x03,0x03,0x7C,0x14,0x14,0x00},
/*029*/ {0x7E,0x01,0x25,0x26,0x18,0x00},
/*030*/ {0x48,0x7E,0x49,0x41,0x42,0x00},
/*031*/ {0x15,0x16,0x7C,0x16,0x15,0x00},
/*032*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*033*/ {0x00,0x00,0x5F,0x00,0x00,0x00},
/*034*/ {0x00,0x07,0x00,0x07,0x00,0x00},
/*035*/ {0x14,0x7F,0x14,0x7F,0x14,0x00},
/*036*/ {0x24,0x2A,0x7F,0x2A,0x12,0x00},
/*037*/ {0x27,0x15,0x6B,0x54,0x72,0x00},
/*038*/ {0x36,0x49,0x56,0x20,0x50,0x00},
/*039*/ {0x00,0x00,0x0B,0x07,0x00,0x00},
/*040*/ {0x00,0x1C,0x22,0x41,0x00,0x00},
/*041*/ {0x00,0x41,0x22,0x1C,0x00,0x00},
/*042*/ {0x2A,0x1C,0x7F,0x1C,0x2A,0x00},
/*043*/ {0x08,0x08,0x3E,0x08,0x08,0x00},
/*044*/ {0x00,0x58,0x38,0x00,0x00,0x00},
/*045*/ {0x08,0x08,0x08,0x08,0x08,0x00},
/*046*/ {0x00,0x60,0x60,0x00,0x00,0x00},
/*047*/ {0x20,0x10,0x08,0x04,0x02,0x00},
/*048*/ {0x3E,0x51,0x49,0x45,0x3E,0x00},
/*049*/ {0x00,0x42,0x7F,0x40,0x00,0x00},
/*050*/ {0x72,0x49,0x49,0x49,0x46,0x00},
/*051*/ {0x22,0x41,0x49,0x49,0x36,0x00},
/*052*/ {0x18,0x14,0x12,0x7F,0x10,0x00},
/*053*/ {0x27,0x45,0x45,0x45,0x39,0x00},
/*054*/ {0x3C,0x4A,0x49,0x49,0x30,0x00},
/*055*/ {0x01,0x71,0x09,0x05,0x03,0x00},
/*056*/ {0x36,0x49,0x49,0x49,0x36,0x00},
/*057*/ {0x06,0x49,0x49,0x29,0x1E,0x00},
/*058*/ {0x00,0x36,0x36,0x00,0x00,0x00},
/*059*/ {0x00,0x5B,0x3B,0x00,0x00,0x00},
/*060*/ {0x08,0x14,0x22,0x41,0x00,0x00},
/*061*/ {0x14,0x14,0x14,0x14,0x14,0x00},
/*062*/ {0x00,0x41,0x22,0x14,0x08,0x00},
/*063*/ {0x02,0x01,0x51,0x09,0x06,0x00},
/*064*/ {0x32,0x49,0x79,0x41,0x3E,0x00},
/*065*/ {0x7C,0x12,0x11,0x12,0x7C,0x00},
/*066*/ {0x41,0x7F,0x49,0x49,0x36,0x00},
/*067*/ {0x3E,0x41,0x41,0x41,0x22,0x00},
/*068*/ {0x41,0x7F,0x41,0x41,0x3E,0x00},
/*069*/ {0x7F,0x49,0x49,0x41,0x41,0x00},
/*070*/ {0x7F,0x09,0x09,0x01,0x01,0x00},
/*071*/ {0x3E,0x41,0x49,0x49,0x3A,0x00},
/*072*/ {0x7F,0x08,0x08,0x08,0x7F,0x00},
/*073*/ {0x00,0x41,0x7F,0x41,0x00,0x00},
/*074*/ {0x20,0x40,0x41,0x3F,0x01,0x00},
/*075*/ {0x7F,0x08,0x14,0x22,0x41,0x00},
/*076*/ {0x7F,0x40,0x40,0x40,0x40,0x00},
/*077*/ {0x7F,0x02,0x0C,0x02,0x7F,0x00},
/*078*/ {0x7F,0x02,0x04,0x08,0x7F,0x00},
/*079*/ {0x3E,0x41,0x41,0x41,0x3E,0x00},
/*080*/ {0x7F,0x09,0x09,0x09,0x06,0x00},
/*081*/ {0x3E,0x41,0x51,0x21,0x5E,0x00},
/*082*/ {0x7F,0x09,0x19,0x29,0x46,0x00},
/*083*/ {0x26,0x49,0x49,0x49,0x32,0x00},
/*084*/ {0x01,0x01,0x7F,0x01,0x01,0x00},
/*085*/ {0x3F,0x40,0x40,0x40,0x3F,0x00},
/*086*/ {0x07,0x18,0x60,0x18,0x07,0x00},
/*087*/ {0x7F,0x20,0x18,0x20,0x7F,0x00},
/*088*/ {0x63,0x14,0x08,0x14,0x63,0x00},
/*089*/ {0x03,0x04,0x78,0x04,0x03,0x00},
/*090*/ {0x61,0x51,0x49,0x45,0x43,0x00},
/*091*/ {0x00,0x7F,0x41,0x41,0x00,0x00},
/*092*/ {0x02,0x04,0x08,0x10,0x20,0x00},
/*093*/ {0x00,0x41,0x41,0x7F,0x00,0x00},
/*094*/ {0x04,0x02,0x01,0x02,0x04,0x00},
/*095*/ {0x40,0x40,0x40,0x40,0x40,0x40},
/*096*/ {0x00,0x00,0x07,0x0B,0x00,0x00},
/*097*/ {0x20,0x54,0x54,0x54,0x38,0x00},
/*098*/ {0x7F,0x28,0x44,0x44,0x38,0x00},
/*099*/ {0x00,0x38,0x44,0x44,0x44,0x00},
/*100*/ {0x38,0x44,0x44,0x28,0x7F,0x00},
/*101*/ {0x38,0x54,0x54,0x54,0x18,0x00},
/*102*/ {0x08,0x7E,0x09,0x01,0x02,0x00},
/*103*/ {0x08,0x54,0x54,0x54,0x3C,0x00},
/*104*/ {0x7F,0x08,0x04,0x04,0x78,0x00},
/*105*/ {0x00,0x44,0x7D,0x40,0x00,0x00},
/*106*/ {0x20,0x40,0x44,0x3D,0x00,0x00},
/*107*/ {0x00,0x7F,0x10,0x28,0x44,0x00},
/*108*/ {0x00,0x41,0x7F,0x40,0x00,0x00},
/*109*/ {0x7C,0x04,0x78,0x04,0x78,0x00},
/*110*/ {0x7C,0x08,0x04,0x04,0x78,0x00},
/*111*/ {0x38,0x44,0x44,0x44,0x38,0x00},
/*112*/ {0x7C,0x14,0x14,0x14,0x08,0x00},
/*113*/ {0x08,0x14,0x14,0x14,0x7C,0x00},
/*114*/ {0x7C,0x08,0x04,0x04,0x08,0x00},
/*115*/ {0x48,0x54,0x54,0x54,0x24,0x00},
/*116*/ {0x00,0x04,0x3F,0x44,0x44,0x00},
/*117*/ {0x3C,0x40,0x40,0x20,0x7C,0x00},
/*118*/ {0x1C,0x20,0x40,0x20,0x1C,0x00},
/*119*/ {0x3C,0x40,0x30,0x40,0x3C,0x00},
/*120*/ {0x44,0x28,0x10,0x28,0x44,0x00},
/*121*/ {0x0C,0x50,0x50,0x50,0x3C,0x00},
/*122*/ {0x44,0x64,0x54,0x4C,0x44,0x00},
/*123*/ {0x00,0x08,0x36,0x41,0x00,0x00},
/*124*/ {0x00,0x00,0x77,0x00,0x00,0x00},
/*125*/ {0x00,0x41,0x36,0x08,0x00,0x00},
/*126*/ {0x08,0x04,0x08,0x10,0x08,0x00},
/*127*/ {0xAA,0x55,0xAA,0x55,0xAA,0x55},
/*128*/ {0x14,0x3E,0x55,0x41,0x22,0x00},
/*129*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*130*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*131*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*132*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*133*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*134*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*135*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*136*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*137*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*138*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*139*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*140*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*141*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*142*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*143*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*144*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*145*/ {0x00,0x00,0x02,0x01,0x00,0x00},
/*146*/ {0x00,0x00,0x02,0x01,0x00,0x00},
/*147*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*148*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*149*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*150*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*151*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*152*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*153*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*154*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*155*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*156*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*157*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*158*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*159*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*160*/ {0x00,0x00,0x00,0x00,0x00,0x00},
/*161*/ {0x00,0x00,0x7D,0x00,0x00,0x00},
/*162*/ {0x18,0x24,0x66,0x24,0x00,0x00},
/*163*/ {0x48,0x7E,0x49,0x41,0x42,0x00},
/*164*/ {0x5A,0x24,0x24,0x24,0x5A,0x00},
/*165*/ {0x15,0x16,0x7C,0x16,0x15,0x00},
/*166*/ {0x00,0x00,0x77,0x00,0x00,0x00},
/*167*/ {0x4A,0x55,0x55,0x29,0x00,0x00},
/*168*/ {0x00,0x01,0x00,0x01,0x00,0x00},
/*169*/ {0x3E,0x49,0x55,0x55,0x3E,0x00},
/*170*/ {0x00,0x24,0x29,0x2A,0x24,0x00},
/*171*/ {0x08,0x14,0x2A,0x14,0x22,0x00},
/*172*/ {0x08,0x08,0x08,0x08,0x38,0x00},
/*173*/ {0x00,0x00,0x08,0x08,0x00,0x00},
/*174*/ {0x3E,0x41,0x5F,0x4B,0x55,0x3E},
/*175*/ {0x02,0x02,0x02,0x02,0x02,0x02},
/*176*/ {0x00,0x02,0x05,0x02,0x00,0x00},
/*177*/ {0x00,0x24,0x2E,0x24,0x00,0x00},
/*178*/ {0x00,0x19,0x15,0x12,0x00,0x00},
/*179*/ {0x00,0x11,0x15,0x0A,0x00,0x00},
/*180*/ {0x00,0x00,0x02,0x01,0x00,0x00},
/*181*/ {0x7C,0x10,0x20,0x20,0x1C,0x00},
/*182*/ {0x02,0x05,0x7F,0x05,0x7F,0x00},
/*183*/ {0x00,0x00,0x08,0x00,0x00,0x00},
/*184*/ {0x00,0x20,0x20,0x30,0x00,0x00},
/*185*/ {0x00,0x02,0x1F,0x00,0x00,0x00},
/*186*/ {0x00,0x17,0x15,0x17,0x00,0x00},
/*187*/ {0x22,0x14,0x2A,0x14,0x08,0x00},
/*188*/ {0x20,0x17,0x28,0x34,0x7A,0x00},
/*189*/ {0x20,0x17,0x08,0x6C,0x52,0x00},
/*190*/ {0x35,0x1A,0x28,0x34,0x7A,0x00},
/*191*/ {0x20,0x50,0x4D,0x40,0x20,0x00},
/*192*/ {0x78,0x15,0x16,0x14,0x78,0x00},
/*193*/ {0x78,0x14,0x16,0x15,0x78,0x00},
/*194*/ {0x78,0x16,0x15,0x16,0x78,0x00},
/*195*/ {0x78,0x16,0x15,0x16,0x79,0x00},
/*196*/ {0x78,0x15,0x14,0x15,0x78,0x00},
/*197*/ {0x78,0x16,0x15,0x16,0x78,0x00},
/*198*/ {0x7E,0x09,0x7F,0x49,0x49,0x00},
/*199*/ {0x1E,0x21,0x61,0x21,0x12,0x00},
/*200*/ {0x7C,0x55,0x56,0x54,0x44,0x00},
/*201*/ {0x7C,0x54,0x56,0x55,0x44,0x00},
/*202*/ {0x7C,0x56,0x55,0x56,0x44,0x00},
/*203*/ {0x7C,0x55,0x54,0x55,0x44,0x00},
/*204*/ {0x00,0x45,0x7E,0x44,0x00,0x00},
/*205*/ {0x00,0x44,0x7E,0x45,0x00,0x00},
/*206*/ {0x00,0x46,0x7D,0x46,0x00,0x00},
/*207*/ {0x00,0x45,0x7C,0x45,0x00,0x00},
/*208*/ {0x49,0x7F,0x49,0x41,0x3E,0x00},
/*209*/ {0x7E,0x09,0x12,0x22,0x7D,0x00},
/*210*/ {0x38,0x45,0x46,0x44,0x38,0x00},
/*211*/ {0x38,0x44,0x46,0x45,0x38,0x00},
/*212*/ {0x38,0x46,0x45,0x46,0x38,0x00},
/*213*/ {0x3A,0x45,0x46,0x45,0x38,0x00},
/*214*/ {0x3C,0x43,0x42,0x43,0x3C,0x00},
/*215*/ {0x00,0x14,0x08,0x14,0x00,0x00},
/*216*/ {0x7E,0x71,0x49,0x47,0x3F,0x00},
/*217*/ {0x3C,0x41,0x42,0x40,0x3C,0x00},
/*218*/ {0x3C,0x40,0x42,0x41,0x3C,0x00},
/*219*/ {0x38,0x42,0x41,0x42,0x38,0x00},
/*220*/ {0x3C,0x41,0x40,0x41,0x3C,0x00},
/*221*/ {0x04,0x08,0x72,0x09,0x04,0x00},
/*222*/ {0x7E,0x24,0x24,0x24,0x18,0x00},
/*223*/ {0x7E,0x01,0x25,0x26,0x18,0x00},
/*224*/ {0x20,0x55,0x56,0x54,0x78,0x00},
/*225*/ {0x20,0x54,0x56,0x55,0x78,0x00},
/*226*/ {0x20,0x56,0x55,0x56,0x78,0x00},
/*227*/ {0x22,0x55,0x56,0x55,0x78,0x00},
/*228*/ {0x20,0x55,0x54,0x55,0x78,0x00},
/*229*/ {0x20,0x56,0x55,0x56,0x78,0x00},
/*230*/ {0x24,0x54,0x7C,0x54,0x58,0x00},
/*231*/ {0x4C,0x52,0x32,0x12,0x12,0x00},
/*232*/ {0x38,0x55,0x56,0x54,0x18,0x00},
/*233*/ {0x38,0x54,0x56,0x55,0x18,0x00},
/*234*/ {0x38,0x56,0x55,0x56,0x18,0x00},
/*235*/ {0x38,0x55,0x54,0x55,0x18,0x00},
/*236*/ {0x00,0x49,0x7A,0x40,0x00,0x00},
/*237*/ {0x00,0x48,0x7A,0x41,0x00,0x00},
/*238*/ {0x00,0x4A,0x79,0x42,0x00,0x00},
/*239*/ {0x00,0x4A,0x78,0x42,0x00,0x00},
/*240*/ {0x30,0x4D,0x4A,0x4D,0x30,0x00},
/*241*/ {0x7A,0x11,0x0A,0x09,0x70,0x00},
/*242*/ {0x38,0x45,0x46,0x44,0x38,0x00},
/*243*/ {0x38,0x44,0x46,0x45,0x38,0x00},
/*244*/ {0x38,0x46,0x45,0x46,0x38,0x00},
/*245*/ {0x3A,0x45,0x46,0x45,0x38,0x00},
/*246*/ {0x38,0x45,0x44,0x45,0x38,0x00},
/*247*/ {0x08,0x08,0x2A,0x08,0x08,0x00},
/*248*/ {0x78,0x64,0x54,0x4C,0x3C,0x00},
/*249*/ {0x38,0x42,0x44,0x40,0x38,0x00},
/*250*/ {0x38,0x40,0x44,0x42,0x38,0x00},
/*251*/ {0x38,0x42,0x41,0x42,0x38,0x00},
/*252*/ {0x38,0x42,0x40,0x42,0x38,0x00},
/*253*/ {0x0C,0x50,0x52,0x51,0x3C,0x00},
/*254*/ {0x7F,0x24,0x24,0x24,0x18,0x00},
/*255*/ {0x0C,0x51,0x50,0x51,0x3C,0x00}
};
#endif