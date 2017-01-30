/*
    Copyright 2016-2017 StapleButter

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef NDSCART_H
#define NDSCART_H

#include "types.h"

namespace NDSCart
{

extern u16 SPICnt;
extern u32 ROMCnt;

extern u8 ROMCommand[8];
extern u32 ROMDataOut;

extern u8 EncSeed0[5];
extern u8 EncSeed1[5];

void Init();
void Reset();

void LoadROM(char* path);

void WriteCnt(u32 val);
u32 ReadData();
void DMA(u32 addr);

}

#endif