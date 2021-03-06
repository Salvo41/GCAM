/*
*  gcode_excellon.h
*  Source code file for G-Code generation, simulation, and visualization
*  library. This software is Copyright (C) 2006 by Justin Shumaker
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _GCODE_EXCELLON_H
#define _GCODE_EXCELLON_H

#include "gcode_internal.h"

typedef struct gcode_excellon_tool_s
{
  uint8_t index;
  gfloat_t diameter;
} gcode_excellon_tool_t;

int gcode_excellon_import (gcode_t *gcode, gcode_block_t ***block_array, int *block_num, char *filename);

#endif
