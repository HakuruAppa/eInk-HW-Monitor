
#include "imagedata_idle.h"
#include <avr/pgmspace.h>

const unsigned char epd_bitmap_idle [] PROGMEM = {
	0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xa0, 0x60, 0x15, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xf0, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf0, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x40, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x10, 0x00, 
	0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1b, 0xe0, 0x40, 0x00, 
	0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x60, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xef, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x61, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x08, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x1f, 0xbf, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x08, 0x40, 0x1c, 0x01, 0x80, 0x00, 0xff, 0xfe, 0x00, 0x01, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0d, 0xc0, 0x0c, 0x03, 0x80, 0x00, 0xff, 0xfc, 0x00, 0x03, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x04, 0x00, 0x06, 0x27, 0xc0, 0x00, 0x3f, 0xf0, 0x00, 0x07, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x28, 0x0e, 0x07, 0xc0, 0x00, 0x2e, 0xe0, 0x00, 0x0f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x06, 0x03, 0xf8, 0x38, 0x03, 0xc0, 0x30, 0x0f, 
	0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x7c, 0x00, 0x01, 0xe0, 0x7f, 
	0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0x3c, 0x3c, 0x00, 0x03, 0xe0, 0xff, 
	0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x08, 0x3c, 0x00, 0x65, 0x80, 0xff, 
	0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x7f, 0x03, 0xff, 
	0xf0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0xff, 0x07, 0xff, 
	0xf8, 0x18, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x33, 0xce, 0x00, 0x7e, 0x8f, 0xff, 
	0xfc, 0x18, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xf8, 0xc6, 0x00, 0x3e, 0x3f, 0xff, 
	0xff, 0xbc, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 
	0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0x00, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xff, 
	0x3f, 0x3c, 0x00, 0x07, 0xff, 0xff, 0xff, 0x80, 0x07, 0x80, 0xfe, 0x10, 0x00, 0x07, 0xff, 0xf8, 
	0x3e, 0x38, 0x08, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0x81, 0xff, 0x1f, 0xc0, 0x07, 0xff, 0xfc, 
	0xfe, 0x78, 0x4e, 0x00, 0x7f, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0xfe, 0x0f, 0xc0, 0x03, 0xff, 0xfc, 
	0xfe, 0x18, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xe0, 0x3e, 0x0f, 0xc0, 0x03, 0xff, 0xfe, 
	0x7e, 0x43, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xc0, 0x23, 0x1f, 0xe0, 0x03, 0xff, 0xff, 
	0x7e, 0xef, 0xbf, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0xff, 0x80, 0x02, 0x1f, 0xf0, 0x03, 0xff, 0xff, 
	0xfd, 0xff, 0xbe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x98, 0x00, 0x3f, 0xf0, 0x03, 0xff, 0xff, 
	0x7f, 0xfb, 0x3c, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0x1c, 0x00, 0x3f, 0xe0, 0x03, 0xff, 0xff, 
	0x7f, 0xf0, 0x38, 0x11, 0xff, 0xff, 0xff, 0xfe, 0x46, 0x1c, 0x00, 0x3f, 0xc0, 0x03, 0xff, 0xff, 
	0xff, 0xc0, 0x78, 0x11, 0xff, 0xff, 0xff, 0xee, 0x6f, 0x00, 0x00, 0x07, 0x80, 0x03, 0xff, 0xff, 
	0xff, 0x86, 0xe8, 0x03, 0xff, 0xff, 0xff, 0xc0, 0xef, 0xe0, 0x00, 0x02, 0x00, 0x03, 0xff, 0xff, 
	0xff, 0x80, 0xc8, 0x03, 0xff, 0xff, 0xff, 0x87, 0xef, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0xff, 0x81, 0xc8, 0x07, 0xff, 0xff, 0xff, 0x0f, 0xd3, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 
	0xff, 0x81, 0x80, 0x07, 0xff, 0xff, 0xfe, 0x0e, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 
	0xff, 0x81, 0xc0, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0xf8, 0x3e, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 
	0xff, 0xc9, 0xc0, 0x0f, 0xff, 0xff, 0xfc, 0x03, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 
	0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xf8, 0x1f, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xff, 
	0x9f, 0x7f, 0xf8, 0x1f, 0xff, 0xff, 0xe0, 0x0c, 0x38, 0x1f, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xff, 
	0xfe, 0x3f, 0xf0, 0x3f, 0xff, 0xff, 0xc0, 0x1c, 0x3f, 0xcf, 0xc0, 0x00, 0x00, 0x3f, 0xff, 0xff, 
	0xfe, 0x3f, 0xe0, 0x3f, 0xff, 0xff, 0x80, 0x1d, 0xff, 0xdc, 0xe0, 0x00, 0x00, 0x7f, 0x7f, 0xff, 
	0xfe, 0x0f, 0xf0, 0x7f, 0xff, 0xff, 0x80, 0x0f, 0xff, 0x04, 0x30, 0x00, 0x00, 0xc0, 0x0f, 0xff, 
	0xfe, 0x0f, 0xf8, 0x7f, 0xff, 0xff, 0x00, 0x04, 0xde, 0x00, 0x70, 0x00, 0x03, 0xc0, 0x0f, 0xff, 
	0x4e, 0x3f, 0xf8, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xef, 0x80, 0x78, 0x00, 0x07, 0xc0, 0x0f, 0xff, 
	0x8f, 0xfc, 0xe1, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x83, 0xdc, 0x7f, 0x00, 0x0f, 0xc0, 0x1f, 0xff, 
	0x87, 0xf0, 0xe1, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xd8, 0x7f, 0xff, 0xff, 0x80, 0x1f, 0xff, 
	0xcf, 0xc0, 0xf3, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0e, 0x00, 0x07, 0xff, 0xff, 0x00, 0x0f, 0xff, 
	0xdf, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x02, 0x01, 0xff, 0xff, 0x00, 0x1f, 0xff, 
	0x1f, 0x07, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x00, 0xcf, 0xff, 0xc1, 0xff, 0xfe, 0x00, 0x1f, 0xff, 
	0x3f, 0x01, 0xff, 0xff, 0xff, 0xbf, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xff, 
	0x3f, 0x87, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xff, 
	0x3f, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xfc, 0x00, 0x1f, 0xff, 
	0xb8, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xf8, 0x00, 0x1f, 0xff, 
	0xf0, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xfc, 0x00, 0xff, 0xff, 
	0xc1, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xc1, 0xff, 0xff, 
	0xe1, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xe1, 0xff, 0xff, 
	0xe0, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf1, 0xff, 0xf9, 
	0x80, 0x0f, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf3, 0xff, 0xe3, 
	0xf8, 0x1f, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf7, 0xff, 0xe1, 
	0xfc, 0x3f, 0xff, 0xfc, 0x03, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xe0, 
	0xfe, 0x7f, 0xff, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xfa, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xf6, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x80, 
	0xff, 0xff, 0xff, 0xee, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf3, 0xff, 0x00, 
	0xdf, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0x00, 
	0x1f, 0xff, 0xff, 0x78, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x00, 
	0x1f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xfe, 0x00, 
	0xff, 0xff, 0xff, 0xf0, 0x8f, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x07, 0xfc, 0x01, 
	0xff, 0xff, 0xf7, 0xe3, 0x8f, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xfc, 0x01, 
	0xff, 0xff, 0xef, 0xe3, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xf8, 0x01, 
	0xff, 0xff, 0xdf, 0xe1, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xf8, 0x03, 
	0xff, 0xff, 0xbf, 0xc1, 0xcf, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xe7, 0xff, 0x87, 0xf0, 0x03, 
	0xff, 0xff, 0xbf, 0x81, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0x07, 0xf0, 0x03, 
	0xff, 0xff, 0xff, 0x19, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x63, 0xe0, 0x03, 
	0xff, 0xff, 0xfe, 0x39, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0xe0, 0x03, 
	0xff, 0xff, 0xfc, 0x79, 0xa7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0x07, 
	0xff, 0xff, 0xfc, 0x61, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xf0, 0x40, 0x07, 
	0xff, 0xff, 0xf8, 0x01, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x80, 0x07, 
	0xff, 0xff, 0xf0, 0x10, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x0f, 
	0xff, 0xff, 0xe0, 0x30, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 
	0xff, 0xff, 0xc2, 0x38, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 
	0xff, 0xff, 0x82, 0x30, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 
	0xff, 0xff, 0x03, 0x06, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x1f, 
	0xff, 0xfe, 0x03, 0x0e, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x1f, 
	0xff, 0xfe, 0x03, 0x1e, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 
	0xff, 0xfc, 0x03, 0x3e, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 
	0xff, 0xf0, 0x03, 0x3c, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 
	0xff, 0xf0, 0x03, 0xb8, 0x07, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 
	0xff, 0xe8, 0x03, 0xf9, 0x87, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
	0xff, 0x88, 0x03, 0x81, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
	0xff, 0x90, 0x03, 0xcf, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
	0xff, 0x10, 0x03, 0xdf, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
	0xfe, 0x00, 0x03, 0xdf, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
	0xff, 0x40, 0x01, 0xd9, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x30, 
	0xff, 0x00, 0x01, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 
	0xf8, 0x00, 0x01, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 
	0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xfe, 0x00, 0x7f, 
	0xf6, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 
	0xf1, 0x20, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xfe, 0x00, 0x3c, 
	0xfd, 0x60, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xfc, 0x00, 0x04, 
	0xff, 0x60, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x9f, 0xfe, 0x00, 0x00, 
	0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xdf, 0xfe, 0x00, 0x00, 
	0xf8, 0xf0, 0x03, 0xbf, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfe, 0x00, 0x02, 
	0xfb, 0xf0, 0x0f, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x7f, 0xfe, 0x00, 0x00, 
	0xff, 0xf0, 0x07, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xfe, 0x00, 0x00, 
	0xff, 0xf0, 0x07, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe0, 0x00, 
	0xff, 0xf0, 0x03, 0xf8, 0x10, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xf0, 0x30, 
	0xff, 0xf0, 0x03, 0xf8, 0x30, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xf0, 0x00, 
	0xff, 0xf0, 0x01, 0xf0, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xf8, 0x00, 
	0xff, 0xf0, 0x00, 0xe0, 0x10, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0x21, 0x80, 0xfc, 0x00, 
	0xff, 0xf0, 0x00, 0x00, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3e, 0x19, 0x80, 0x7c, 0x00, 
	0xff, 0xf0, 0x00, 0x00, 0x1c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x48, 0x00, 0x3c, 0x0c, 
	0xff, 0xf0, 0x00, 0x00, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0x00, 0x1e, 0x0e, 
	0xff, 0xf0, 0x00, 0x00, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x80, 0x0f, 0x0c, 
	0xff, 0xf0, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf0, 0x0f, 0x0c, 
	0xff, 0xf0, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xf8, 0x07, 0x8c, 
	0xff, 0xf0, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xf0, 0x07, 0x8c, 
	0xff, 0xe0, 0x00, 0x00, 0x1c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xf0, 0x03, 0xc4, 
	0xff, 0xc0, 0x00, 0x00, 0x3c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xf0, 0x03, 0xc0, 
	0xff, 0x80, 0x00, 0x00, 0x3c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xf0, 0x03, 0xe0, 
	0xff, 0x80, 0x00, 0x00, 0x3c, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xe0, 
	0x3f, 0x80, 0x00, 0x00, 0x3c, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xf0, 
	0x1e, 0x00, 0x00, 0x00, 0x3c, 0x01, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xe0, 0x01, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x3c, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x3c, 0x01, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xe0, 0x00, 0xf8, 
	0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x7c, 
	0x00, 0x00, 0x03, 0x00, 0x7c, 0x00, 0x7f, 0xff, 0xff, 0xb0, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x7c, 
	0x00, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x3c, 
	0x00, 0x00, 0x07, 0xc0, 0x3c, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x3e, 
	0x00, 0x00, 0x07, 0xc0, 0x7c, 0x00, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x3e, 
	0x00, 0x00, 0x01, 0x80, 0x7c, 0x00, 0x07, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x03, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 
	0x00, 0x00, 0x02, 0x00, 0x7c, 0x00, 0x01, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 
	0x00, 0x00, 0x04, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 
	0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x04, 0x00, 0x7c, 0x00, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x7c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x3e, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 
	0x00, 0x00, 0x00, 0x01, 0x7c, 0x00, 0x1f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x0e, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x63, 0xff, 0x80, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x80, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x27, 
	0x00, 0x00, 0x00, 0x07, 0xf7, 0xe1, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7e, 
	0x1a, 0x00, 0x00, 0x07, 0xfb, 0xc3, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 
	0x02, 0x00, 0x00, 0x07, 0xff, 0xe3, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 
	0x07, 0x00, 0x00, 0x07, 0xff, 0xe1, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 
	0x06, 0x00, 0x00, 0x03, 0xff, 0xe1, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 
	0x02, 0x00, 0x00, 0x03, 0xff, 0xf0, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 
	0x00, 0x1c, 0x00, 0x03, 0xff, 0xf0, 0x7e, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 
	0x00, 0x3c, 0x00, 0x03, 0xff, 0xe0, 0x3f, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
	0x01, 0xfe, 0x00, 0x03, 0xff, 0xc0, 0x3f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
	0x03, 0xfe, 0x00, 0x03, 0xff, 0xc0, 0x0f, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
	0x01, 0xfe, 0x00, 0x07, 0xff, 0xc0, 0x03, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 
	0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x03, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 
	0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x01, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 
	0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x01, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 
	0x00, 0x00, 0x00, 0x7f, 0xfd, 0xc0, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 
	0x00, 0x00, 0x00, 0x7f, 0xf9, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 
	0x00, 0x00, 0x00, 0x3f, 0xf9, 0xc0, 0x00, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 
	0x00, 0x00, 0x00, 0x3f, 0xf9, 0xc0, 0x00, 0x3f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xfe, 
	0x00, 0x00, 0x00, 0x3f, 0xf9, 0xc0, 0x00, 0x1f, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xfc, 
	0x00, 0x00, 0x00, 0x7f, 0xf1, 0xc0, 0x00, 0x0f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfc, 
	0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xfc, 
	0x00, 0x00, 0x01, 0xfc, 0xf0, 0x00, 0x00, 0x07, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x00, 0x00, 0x03, 0xf8, 0x20, 0x00, 0x00, 0x01, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x01, 0xfb, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x00, 0x00, 0x03, 0x40, 0x00, 0x00, 0x03, 0xff, 0xf3, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x03, 0xff, 0xf8, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x3b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0xff, 0xfd, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0xff, 0xfd, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x00, 0x00, 0x0e, 0x00, 0x00, 0x07, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x0e, 0x00, 0x00, 0x01, 0xff, 0xfc, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0xff, 0xfe, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
	0x00, 0x00, 0x3b, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
	0x00, 0x00, 0x3b, 0xf8, 0x03, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xfc, 0x00, 
	0x00, 0x00, 0x3f, 0xf8, 0x03, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0x03, 0xff, 0xff, 0xfc, 0x00, 
	0x00, 0x00, 0x3f, 0xf8, 0x03, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x01, 0xff, 0xff, 0xf8, 0x00, 
	0x00, 0x00, 0x3f, 0xf8, 0x01, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xf8, 0x00, 
	0x00, 0x00, 0xfe, 0x00, 0x01, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xf0, 0x00, 
	0x00, 0x00, 0xe0, 0x00, 0x00, 0xff, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf0, 0x00, 
	0x00, 0x01, 0xc0, 0x00, 0x00, 0x78, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x07, 0x9f, 0xff, 0xe0, 0x00, 
	0x00, 0x03, 0xc0, 0x00, 0x00, 0x3c, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xcf, 0xff, 0xe0, 0x00, 
	0xc0, 0x1f, 0x80, 0x00, 0x00, 0x0e, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xc7, 0xff, 0x80, 0x00, 
	0xe0, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0x83, 0xfc, 0x00, 0x00, 
	0xe0, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00, 
	0xf0, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf0, 0x07, 0xc1, 0xf8, 0x00, 0x00, 
	0xf8, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x01, 0x80, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x3d, 0x8e, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x7d, 0x9e, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0xe0, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xe1, 0xf8, 0x07, 0xfc, 0x00, 0x00, 0x00, 
	0x33, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1f, 0xfe, 0x00, 0x00, 0x00, 
	0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x7f, 0xff, 0x00, 0x00, 0x00, 
	0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x7f, 0xcf, 0x00, 0x00, 0x00, 
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x60, 0x1f, 0xee, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1b, 0x00, 0x0f, 0xc6, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x27, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7e, 0xc7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7f, 0x87, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x7f, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xfe, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x7e, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf8, 0x33, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0xe0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x87, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe1, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x8f, 0x9f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x9f, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0xfc, 0x00, 0x00, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0f, 0x7f, 0xfd, 0xfe, 0x00, 0x00, 0x7e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x0f, 0xed, 0xff, 0xbf, 0x80, 0x07, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0x1f, 0xff, 0xfe, 0x3f, 0xc0, 0x0f, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x08, 0x3f, 0xff, 0x3e, 0x3b, 0x1f, 0xff, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xdc, 0x1f, 0xfc, 0x1f, 0x7e, 0x3f, 0xff, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0xdf, 0xfe, 0x7f, 0xf8, 0x3f, 0xff, 0xc0, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xb0, 0x4f, 0xfc, 0x7f, 0xc0, 0x1f, 0xff, 0x00, 0x00, 0x78, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x7f, 0xf0, 0x7f, 0x9c, 0x0f, 0xff, 0xe8, 0x00, 0x3c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc4, 0xff, 0xfe, 0x7f, 0x1c, 0x00, 0x3c, 0xe0, 0x00, 0x18, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x3c, 0x00, 0x04, 0x7c, 0x70, 0x80, 0x18, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfb, 0xff, 0xff, 0x39, 0x06, 0x00, 0x7f, 0xbe, 0x00, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x60, 0x0e, 0x00, 0x9d, 0xef, 0x40, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xff, 0xff, 0xff, 0x60, 0x1f, 0x00, 0x1f, 0xf7, 0xf8, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xcf, 0xe0, 0x1f, 0x00, 0x3f, 0xff, 0xfb, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x3f, 0x00, 0x0f, 0x03, 0xff, 0xff, 0xff, 0xfb, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0xf0, 0x3e, 0x00, 0x06, 0x03, 0xff, 0xaf, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x06, 0x03, 0x7e, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x10, 0x03, 0x7f, 0xff, 
	0x00, 0x00, 0x03, 0xff, 0xff, 0xbf, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x7d, 0xff, 
	0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x10, 0xff, 0x30, 0x00, 0x00, 0x00, 0xff, 
	0x00, 0x00, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x31, 0xff, 0x70, 0x00, 0x00, 0x00, 0x1f, 
	0x00, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x71, 0xfe, 0x70, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xf0, 0x33, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x21, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0xf0, 0x60, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0xf8, 0x60, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xfe, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};