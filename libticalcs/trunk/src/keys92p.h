/*  libticalcs - calculator library, a part of the TiLP project
 *  Copyright (C) 1999-2002  Romain Lievin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef KEYS92_H
#define KEYS92_H

#include "calc_def.h"

/*
  Conversion of an PC scancode into an TI scancode.
  This array use UniCode character set on PC side (16 bits chars) as an index.
  The TI character set is the same as PC one from 0x00 to 0x7F and from 0xC0 to 0xFF.

  These codes can be found in the section B of the french manual
  From 0x00 to 0xff, Unicode codes.
  From 0x0100, I have put proprietary TI scancodes.

  The array can be used in reverse order too, at least for the first column...
*/
const struct ti_key TI92_KEYS[]=
{
/* 0x00, 0-15 */
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "<-", "BS", 257, "BS", 257, "INS", 4353, "DEL", 8449, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "ENTER", "CR", 13, "CR", 13, "APPROX", 8205, "ENTRY", 4109, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
/* 0x10, 16-31 */
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "ESC", "ESC", 264, "ESC", 264, "QUIT", 4360, "", 8456, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
/* 0x20, 32-47 */
  { "SPACE", "", 32, "", 32, "", 32, "", 8224, "", 0 },
  { "!", "!", 33, "", 0, "", 0, "", 0, "", 0 },
  { "\"", "\"", 34, "", 0, "", 0, "", 0, "", 0 },
  { "#", "#", 35, "", 0, "", 0, "", 0, "", 0 },
  { "$", "$", 36, "", 0, "", 0, "", 0, "", 0 },
  { "%", "%", 37, "", 0, "", 0, "", 0, "", 0 },
  { "&", "&", 38, "", 0, "", 0, "", 0, "", 0 },
  { "'", "'", 39, "", 0, "", 0, "", 0, "", 0 },
  { "(", "(", 40, "(", 40, "{", 123, "", 8232, "", 0 },
  { ")", ")", 41, ")", 41, "}", 125, "", 8233, "", 0 },
  { "*", "*", 42, "*", 42, "\214", 4138, "", 8234, "", 0 },
  { "+", "+", 43, "+", 43, "CHAR", 4139, "Contrast+", 0, "", 0 },
  { ",", ",", 44, ",", 44, "[", 91, "", 8236, "", 0 },
  { "-", "-", 45, "-", 45, "VAR-LINK", 4141, "Contrast-", 0, "", 0 },
  { ".", ".", 46, ".", 46, ">", 62, "", 8238, "", 0 },
  { "/", "/", 47, "/", 47, "]", 93, "", 8239, "", 0 },
/* 0x30, 48-63 */
  { "0", "0", 48, "0", 48, "<", 60, "", 8240, "", 0 },
  { "1", "1", 49, "1", 49, "E", 149, "", 8241, "", 0 },
  { "2", "2", 50, "2", 50, "CATALOG", 4146, "", 8242, "", 0 },
  { "3", "3", 51, "3", 51, "CUSTOM", 4147, "", 8243, "", 0 },
  { "4", "4", 52, "4", 52, "\132", 4148, "", 8244, "", 0 },
  { "5", "5", 53, "5", 53, "MATH", 4149, "", 8245, "", 0 },
  { "6", "6", 54, "6", 54, "MEM", 4150, "", 8246, "", 0 },
  { "7", "7", 55, "7", 55, "VAR-LINK", 4151, "", 8247, "", 0 },
  { "8", "8", 56, "8", 56, "\189", 4152, "", 8248, "", 0 },
  { "9", "9", 57, "9", 57, "\133", 4153, "", 8249, "", 0 },
  { ":", ":", 58, "", 0, "", 0, "", 0, "", 0 },
  { ";", ";", 59, "", 0, "", 0, "", 0, "", 0 },
  { "<", "<", 60, "", 0, "", 0, "", 0, "", 0 },
  { "=", "=", 61, "=", 61, "\\", 92, "", 8253, "", 0 },
  { ">", ">", 62, "", 0, "", 0, "", 0, "", 0 },
  { "?", "?", 63, "", 0, "", 0, "", 0, "", 0 },
/* 0x40, 64-79 */
  { "@", "@", 64, "", 0, "", 0, "", 0, "", 0 },
  { "A", "A", 65, "A", 65, "Table3", 0, "", 8257, "", 0 },
  { "B", "B", 66, "B", 66, "'", 39, "", 8258, "", 0 },
  { "C", "C", 67, "C", 67, "Table4", 0, "COPY", 8259, "", 0 },
  { "D", "D", 68, "D", 68, "\176", 176, "", 8260, "", 0 },
  { "E", "E", 69, "E", 69, "Table5", 0, "WINDOW", 8261, "", 0 },
  { "F", "F", 70, "F", 70, "\208", 159, "FORMAT", 8262, "", 0 },
  { "G", "G", 71, "G", 71, "Table6", 0, "", 8263, "", 0 },
  { "H", "H", 72, "H", 72, "&", 38, "", 8264, "", 0 },
  { "I", "I", 73, "I", 73, "\151", 151, "", 8265, "", 0 },
  { "J", "J", 74, "J", 74, "\165", 190, "", 8266, "", 0 },
  { "K", "K", 75, "K", 75, "|", 124, "", 8267, "", 0 },
  { "L", "L", 76, "L", 76, "\"", 34, "", 8268, "", 0 },
  { "M", "M", 77, "M", 77, ";", 59, "", 8269, "", 0 },
  { "N", "N", 78, "N", 78, "Table7", 0, "NEW", 8270, "", 0 },
  { "O", "O", 79, "O", 79, "Table8", 0, "OPEN", 8271, "", 0 },
/* 0x50, 80-95 */
  { "P", "P", 80, "P", 80, "_", 95, "", 8272, "", 0 },
  { "Q", "Q", 81, "Q", 81, "?", 63, "HOME", 8273, "", 0 },
  { "R", "R", 82, "R", 82, "@", 64, "GRAPH", 8274, "", 0 },
  { "S", "S", 83, "S", 83, "\223", 223, "SAVE", 8275, "", 0 },
  { "T", "T", 84, "T", 84, "#", 35, "TblSet", 8276, "", 0 },
  { "U", "U", 85, "U", 85, "Table9", 0, "", 8277, "", 0 },
  { "V", "V", 86, "V", 86, "\157", 157, "PASTE", 8278, "", 0 },
  { "W", "W", 87, "W", 87, "!", 33, "Y=", 8279, "", 0 },
  { "X", "X", 88, "X", 88, "\169", 169, "CUT", 8280, "", 0 },
  { "Y", "Y", 89, "Y", 89, "\18", 18, "TABLE", 8281, "", 0 },
  { "Z", "Z", 90, "Z", 90, "CapsLock", 0, "", 8282, "", 0 },
  { "[", "[", 91, "", 0, "", 0, "", 0, "", 0 },
  { "\\","\\",  92, "", 0, "", 0, "", 0, "", 0 },
  { "]", "]", 93, "", 0, "", 0, "", 0, "", 0 },
  { "^", "^", 94, "^", 94, "\140", 140, "", 8286, "", 0 },
  { "_", "_", 95, "", 0, "", 0, "", 0, "", 0 },
/* 0x60, 96-111 */
  { "", "", 0, "", 0, "", 0, "", 0, "", 0 },
  { "a", "a", 97, "A", 65, "Table3", 0, "", 8257, "", 0 },
  { "b", "b", 98, "B", 66, "'", 39, "", 8258, "", 0 },
  { "c", "c", 99, "C", 67, "Table4", 0, "COPY", 8259, "", 0 },
  { "d", "d", 100, "D", 68, "\176", 176, "", 8260, "", 0 },
  { "e", "e", 101, "E", 69, "Table5", 0, "WINDOW", 8261, "", 0 },
  { "f", "f", 102, "F", 70, "\208", 159, "FORMAT", 8262, "", 0 },
  { "g", "g", 103, "G", 71, "Table6", 0, "", 8263, "", 0 },
  { "h", "h", 104, "H", 72, "&", 38, "", 8264, "", 0 },
  { "i", "i", 105, "I", 73, "\151", 151, "", 8265, "", 0 },
  { "j", "j", 106, "J", 74, "\165", 190, "", 8266, "", 0 },
  { "k", "k", 107, "K", 75, "|", 124, "", 8267, "", 0 },
  { "l", "l", 108, "L", 76, "\"", 34, "", 8268, "", 0 },
  { "m", "m", 109, "M", 77, ";", 59, "", 8269, "", 0 },
  { "n", "n", 110, "N", 78, "Table7", 0, "NEW", 8270, "", 0 },
  { "o", "o", 111, "O", 79, "Table8", 0, "OPEN", 8271, "", 0 },
/* 0x70, 112 */
  { "p", "p", 112, "P", 80, "_", 95, "", 8272, "", 0 },
  { "q", "q", 113, "Q", 81, "?", 63, "HOME", 8273, "", 0 },
  { "r", "r", 114, "R", 82, "@", 64, "GRAPH", 8274, "", 0 },
  { "s", "s", 115, "S", 83, "\223", 223, "SAVE", 8275, "", 0 },
  { "t", "t", 116, "T", 84, "#", 35, "TblSet", 8276, "", 0 },
  { "u", "u", 117, "U", 85, "Table9", 0, "", 8277, "", 0 },
  { "v", "v", 118, "V", 86, "\157", 157, "PASTE", 8278, "", 0 },
  { "w", "w", 119, "W", 87, "!", 33, "Y=", 8279, "", 0 },
  { "x", "x", 120, "X", 88, "\169", 169, "CUT", 8280, "", 0 },
  { "y", "y", 121, "Y", 89, "\18", 18, "TABLE", 8281, "", 0 },
  { "z", "z", 122, "Z", 90, "CapsLock", 0, "", 8282, "", 0 },
  { "{", "{", 0, "", 0, "", 0, "", 0, "", 0 },
  { "|", "|", 0, "", 0, "", 0, "", 0, "", 0 },
  { "}", "}", 0, "", 0, "", 0, "", 0, "", 0 },
  { "~", "~", 126, "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0x80, 128 */
  { "\128", "\128", 128, "", 0, "", 0, "", 0 },
  { "\129", "\129", 129, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "\131", "\131", 131, "\130", 130, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "\133", "\133", 133, "\132", 132, "", 0, "", 0 },
  { "\134", "\134", 134, "", 0, "", 0, "", 0 },
  { "\135", "\135", 135, "", 0, "", 0, "", 0 },
  { "\136", "\136", 136, "\136", 136, ":", 58, "", 8328, "", 0 },
  { "\137", "\137", 137, "", 0, "", 0, "", 0 },
  { "\138", "\138", 138, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "\140", "\140", 140, "\139", 139, "", 0, "", 0 },
  { "\141", "\141", 141, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "\143", "\143", 143, "\142", 142, "", 0, "", 0 },
/* 0x90, 144 */
  { "\144", "\144", 144, "", 0, "", 0, "", 0 },
  { "\145", "\145", 145, "", 0, "", 0, "", 0 },
  { "\146", "\146", 146, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0xA0, 160 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "\173", "\173", 173, "\173", 173, "ANS", 4372, "", 8365, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0xB0, 176 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0xC0, 192 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0xD0, 208 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0xE0, 224 */
  { "�", "�", 224, "\192", 192, "", 0, "", 0 },
  { "\225", "\225", 225, "\193", 193, "", 0, "", 0 },
  { "�", "�", 226, "\194", 194, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "�", "�", 228, "\196", 196, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "�", "�", 231, "\199", 199, "", 0, "", 0 },
  { "�", "�", 232, "\200", 200, "", 0, "", 0 },
  { "�", "�", 233, "\201", 201, "", 0, "", 0 },
  { "�", "�", 234, "\202", 202, "", 0, "", 0 },
  { "�", "�", 235, "\203", 203, "", 0, "", 0 },
  { "\236", "\236", 236, "\204", 204, "", 0, "", 0 },
  { "\237", "\237", 237, "\205", 205, "", 0, "", 0 },
  { "�", "�", 238, "\206", 206, "", 0, "", 0 },
  { "�", "�", 239, "\207", 207, "", 0, "", 0 },
/* 0xF0, 240-255 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "�", "�", 241, "\209", 209, "", 0, "", 0 },
  { "\242", "\242", 242, "\210", 210, "", 0, "", 0 },
  { "\243", "\243", 243, "\211", 211, "", 0, "", 0 },
  { "�", "�", 244, "\212", 212, "", 0, "", 0 },
  { "�", "�", 245, "", 0, "", 0, "", 0 },
  { "�", "�", 246, "\214", 214, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "�", "�", 249, "\217", 217, "", 0, "", 0 },
  { "\250", "\250", 250, "\221", 221, "", 0, "", 0 },
  { "�", "�", 251, "\219", 219, "", 0, "", 0 },
  { "�", "�", 252, "\220", 220, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "�", "�", 255, "", 0, "", 0, "", 0 },
/* 0x100, 256 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "<-", "BS", 257, "BS", 257, "INS", 4353, "DEL", 8449, "", 0 },
  { "STO->", "STO->", 258, "STO->", 258, "RCL", 4354, "", 8450, "", 0 },
  { "SIN", "SIN", 259, "SIN", 259, "SIN\200", 4355, "", 8451, "", 0 },
  { "COS", "COS", 260, "COS", 260, "COS\200", 4356, "", 8452, "", 0 },
  { "TAN", "TAN", 261, "TAN", 261, "TAN\200", 4357, "", 8453 , "", 0 },
  { "LN", "LN", 262, "LN", 262, "e^x", 4358, "", 8454, "", 0 },
  { "CLEAR", "CLEAR", 263, "CLEAR", 263, "CLEAR", 263, "", 8455, "", 0 },
  { "ESC", "ESC", 264, "ESC", 264, "QUIT", 4360, "", 8456, "", 0 },
  { "APPS", "APPS", 265, "APPS", 265, "SWITCH", 4361, "", 8457, "", 0 },
  { "MODE", "MODE", 266, "MODE", 266, "MODE", 266, "", 8458, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "F1", "F1", 268, "F1", 268, "F1", 8460, "", 0 },
  { "F2", "F2", 269, "F2", 269, "F2", 8461, "", 0 },
  { "F3", "F3", 270, "F3", 270, "F3", 8462, "", 0 },
  { "F4", "F4", 271, "F4", 271, "F4", 8463, "", 0 },
/* 0x110,272 */
  { "F5", "F5", 272, "F5", 272, "F5", 8464, "", 0 },
  { "F6", "F6", 273, "F6", 273, "F6", 8465, "", 0 },
  { "F7", "F7", 274, "F7", 274, "F7", 8466, "", 0 },
  { "F8", "F8", 275, "F8", 275, "F8", 8467, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0x120, 288 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0x130, 304 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0x140, 320 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
/* 0x150, 336 */
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "LEFT", "LEFT", 337, "LEFT", 16721, "LEFT", 4433, "LEFT", 8529 },
  { "UP", "UP", 338, "UP", 16722, "UP", 4434, "UP", 8530, "", 0 },
  { "LEFT-UP", "LEFT-UP", 339, "LEFT-UP", 339, "LEFT-UP", 339, "LEFT-UP", 339 },
  { "RIGHT", "RIGHT", 340, "RIGHT", 16724, "RIGHT", 4436, "RIGHT", 8532, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "RIGHT-UP", "RIGHT-UP", 342, "RIGHT-UP", 0, "RIGHT-UP", 0, "RIGHT-UP", 0 },
  { "DOWN", "DOWN", 344, "DOWN", 16728, "DOWN", 4440, "DOWN", 8536, "", 0 },
  { "LEFT-DOWN", "LEFT-DOWN", 345, "LEFT-DOWN", 345, "LEFT-DOWN", 345, "LEFT-DOWN", 345 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "RIGHT-DOWN", "RIGHT-DOWN", 348, "RIGHT-DOWN", 348, "RIGHT-DOWN", 348, "RIGHT-DOWN", 348 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 },
  { "", "", 0, "", 0, "", 0, "", 0 }
/* 0x160 */
};

#endif
