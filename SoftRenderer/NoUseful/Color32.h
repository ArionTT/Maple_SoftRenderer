#ifndef COLOR_H
#include"Color.h"
#endif // !COLOR_H

#ifndef DATA_TYPE_UINT
#define DATA_TYPE_UINT

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

#endif // !DATA_TYPE_UINT


#ifndef COLOR_32_H
#define COLOR_32_H

class Color32
{
public:
	Color32();
	Color32(uint8 r, uint8 g, uint8 b,uint8 a=255);
	Color32(const Color32& color);
	Color32(const Color& color);
	~Color32();

public:
	uint8 r, g, b, a;
};

#endif // !COLOR_32_H

