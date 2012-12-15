/*
 arm.c
 
 http://code.google.com/p/armstorm/
 distorm at gmail dot com
 Copyright (C) 2012 Gil Dabah
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include "armstorm.h"
#include "common.h"

static unsigned long read_long(const unsigned char* ptr, _EndianityType endianity)
{
    //endianity;
    return *(unsigned long*)ptr;
}

_DecodeResult decompose_arm(_DecomposeInfo* info)
{
    return DECRES_SUCCESS;
}