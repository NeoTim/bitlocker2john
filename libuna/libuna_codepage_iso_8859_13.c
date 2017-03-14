/*
 * ISO 8859-13 codepage (Baltic) function
 *
 * Copyright (C) 2008-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <types.h>

#include "libuna_codepage_iso_8859_13.h"

/* Extended ASCII to Unicode character lookup table for ISO 8859-13 codepage
 * Unknown are filled with the Unicode replacement character 0xfffd
 */
const uint16_t libuna_codepage_iso_8859_13_byte_stream_to_unicode_base_0xa0[ 96 ] = {
	0x00a0, 0x201d, 0x00a2, 0x00a3, 0x00a4, 0x201e, 0x00a6, 0x00a7,
	0x00d8, 0x00a9, 0x0156, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00c6,
	0x00b0, 0x00b1, 0x00b2, 0x00b3, 0x201c, 0x00b5, 0x00b6, 0x00b7,
	0x00f8, 0x00b9, 0x0157, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00e6,
	0x0104, 0x012e, 0x0100, 0x0106, 0x00c4, 0x00c5, 0x0118, 0x0112,
	0x010c, 0x00c9, 0x0179, 0x0116, 0x0122, 0x0136, 0x012a, 0x013b,
	0x0160, 0x0143, 0x0145, 0x00d3, 0x014c, 0x00d5, 0x00d6, 0x00d7,
	0x0172, 0x0141, 0x015a, 0x016a, 0x00dc, 0x017b, 0x017d, 0x00df,
	0x0105, 0x012f, 0x0101, 0x0107, 0x00e4, 0x00e5, 0x0119, 0x0113,
	0x010d, 0x00e9, 0x017a, 0x0117, 0x0123, 0x0137, 0x012b, 0x013c,
	0x0161, 0x0144, 0x0146, 0x00f3, 0x014d, 0x00f5, 0x00f6, 0x00f7,
	0x0173, 0x0142, 0x015b, 0x016b, 0x00fc, 0x017c, 0x017e, 0x2019
};

/* Unicode to ASCII character lookup table for ISO 8859-13 codepage
 * Unknown are filled with the ASCII replacement character 0x1a
 */
const uint8_t libuna_codepage_iso_8859_13_unicode_to_byte_stream_base_0x00a0[ 224 ] = {
	0xa0, 0x1a, 0xa2, 0xa3, 0xa4, 0x1a, 0xa6, 0xa7,
	0x1a, 0xa9, 0x1a, 0xab, 0xac, 0xad, 0xae, 0x1a,
	0xb0, 0xb1, 0xb2, 0xb3, 0x1a, 0xb5, 0xb6, 0xb7,
	0x1a, 0xb9, 0x1a, 0xbb, 0xbc, 0xbd, 0xbe, 0x1a,
	0x1a, 0x1a, 0x1a, 0x1a, 0xc4, 0xc5, 0xaf, 0x1a,
	0x1a, 0xc9, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0x1a, 0xd3, 0x1a, 0xd5, 0xd6, 0xd7,
	0xa8, 0x1a, 0x1a, 0x1a, 0xdc, 0x1a, 0x1a, 0xdf,
	0x1a, 0x1a, 0x1a, 0x1a, 0xe4, 0xe5, 0xbf, 0x1a,
	0x1a, 0xe9, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0x1a, 0xf3, 0x1a, 0xf5, 0xf6, 0xf7,
	0xb8, 0x1a, 0x1a, 0x1a, 0xfc, 0x1a, 0x1a, 0x1a,
	0xc2, 0xe2, 0x1a, 0x1a, 0xc0, 0xe0, 0xc3, 0xe3,
	0x1a, 0x1a, 0x1a, 0x1a, 0xc8, 0xe8, 0x1a, 0x1a,
	0x1a, 0x1a, 0xc7, 0xe7, 0x1a, 0x1a, 0xcb, 0xeb,
	0xc6, 0xe6, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0xcc, 0xec, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0xce, 0xee, 0x1a, 0x1a, 0xc1, 0xe1,
	0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0xcd, 0xed,
	0x1a, 0x1a, 0x1a, 0xcf, 0xef, 0x1a, 0x1a, 0x1a,
	0x1a, 0xd9, 0xf9, 0xd1, 0xf1, 0xd2, 0xf2, 0x1a,
	0x1a, 0x1a, 0x1a, 0x1a, 0xd4, 0xf4, 0x1a, 0x1a,
	0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0xaa, 0xba,
	0x1a, 0x1a, 0xda, 0xfa, 0x1a, 0x1a, 0x1a, 0x1a,
	0xd0, 0xf0, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0xdb, 0xfb, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0x1a, 0xd8, 0xf8, 0x1a, 0x1a, 0x1a, 0x1a,
	0x1a, 0xca, 0xea, 0xdd, 0xfd, 0xde, 0xfe, 0x1a
};

const uint8_t libuna_codepage_iso_8859_13_unicode_to_byte_stream_base_0x2018[ 8 ] = {
	0x1a, 0xff, 0x1a, 0x1a, 0xb4, 0xa1, 0xa5, 0x1a
};