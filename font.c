#include "font.h"

const uint8_t gBigFont[95][16] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x70, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
	{ 0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x40, 0xF0, 0xF0, 0x40, 0xF0, 0xF0, 0x40, 0x00, 0x04, 0x1F, 0x1F, 0x04, 0x1F, 0x1F, 0x04, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x8F, 0x8F, 0x98, 0x30, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07, 0x00 },
	{ 0x60, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x18, 0x18, 0x00 },
	{ 0x00, 0xB0, 0xF8, 0xC8, 0x78, 0xB0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x00, 0x20, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0xE0, 0xF0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x00, 0x00 },
	{ 0x00, 0x40, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x00, 0x01, 0x05, 0x07, 0x03, 0x03, 0x07, 0x05, 0x01 },
	{ 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00 },
	{ 0xF0, 0xF8, 0x08, 0x88, 0x48, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x12, 0x11, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x00, 0x20, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x00 },
	{ 0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x18, 0x00 },
	{ 0x10, 0x18, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x08, 0x18, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0x1F, 0x1F, 0x11, 0x00 },
	{ 0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x08, 0x18, 0x10, 0x10, 0x11, 0x1F, 0x0F, 0x00 },
	{ 0xE0, 0xF0, 0x98, 0x88, 0x88, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x18, 0x18, 0x08, 0x08, 0x88, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, 0x00 },
	{ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
	{ 0x00, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 },
	{ 0x30, 0x38, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00 },
	{ 0xE0, 0xF0, 0x10, 0x90, 0x90, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x17, 0x17, 0x17, 0x03, 0x00 },
	{ 0xC0, 0xE0, 0x30, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x11, 0x18, 0x1C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x01, 0x00, 0x00, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x11, 0x11, 0x0F, 0x1F, 0x00 },
	{ 0xF8, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x10, 0x1F, 0x1F, 0x01, 0x03, 0x1E, 0x1C, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x18, 0x1C, 0x00 },
	{ 0xF8, 0xF8, 0x70, 0xE0, 0x70, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x00 },
	{ 0xE0, 0xF0, 0x18, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
	{ 0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x10, 0x1C, 0x78, 0x7F, 0x4F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x01, 0x1F, 0x1E, 0x00 },
	{ 0x30, 0x78, 0xC8, 0x88, 0x88, 0x38, 0x30, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x11, 0x1F, 0x0E, 0x00 },
	{ 0x00, 0x38, 0x18, 0xF8, 0xF8, 0x18, 0x38, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03, 0x00 },
	{ 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x07, 0x1F, 0x1C, 0x07, 0x1C, 0x1F, 0x07, 0x00 },
	{ 0x18, 0x78, 0xE0, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x07, 0x1E, 0x18, 0x00 },
	{ 0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x38, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x38, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x1C, 0x00 },
	{ 0x00, 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00, 0x00 },
	{ 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x00 },
	{ 0x00, 0x00, 0x08, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00 },
	{ 0x10, 0x18, 0x0E, 0x07, 0x0E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40 },
	{ 0x00, 0x00, 0x07, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x08, 0x00 },
	{ 0x00, 0x80, 0xC0, 0x48, 0xF8, 0xF8, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x11, 0x11, 0x11, 0x19, 0x09, 0x00 },
	{ 0x80, 0xF0, 0xF8, 0x88, 0x18, 0x30, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x4F, 0xDF, 0x90, 0x90, 0xFF, 0x7F, 0x00, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x80, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xFF, 0x7F, 0x00 },
	{ 0x08, 0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x1F, 0x1F, 0x03, 0x07, 0x1C, 0x18, 0x00 },
	{ 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00 },
	{ 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x90, 0x10, 0x1F, 0x0F, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x0F, 0x1F, 0x10, 0x90, 0xFF, 0xFF, 0x80, 0x00 },
	{ 0x40, 0xC0, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x01, 0x00 },
	{ 0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x08, 0x19, 0x13, 0x12, 0x16, 0x1C, 0x08, 0x00 },
	{ 0x40, 0x40, 0xF0, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x18, 0x08, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00 },
	{ 0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x18, 0x0F, 0x07, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x0E, 0x18, 0x1F, 0x0F, 0x00 },
	{ 0x40, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x0F, 0x18, 0x10, 0x00 },
	{ 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x8F, 0x9F, 0x90, 0x90, 0xD0, 0x7F, 0x3F, 0x00 },
	{ 0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x18, 0x18, 0x00 },
	{ 0x00, 0x80, 0x80, 0xF0, 0x78, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x00 },
	{ 0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00 },
	{ 0x00, 0x08, 0x08, 0x78, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00 },
	{ 0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
};
