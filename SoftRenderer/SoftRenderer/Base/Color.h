#ifndef DATA_TYPE_UINT
#define DATA_TYPE_UINT

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

#endif // !DATA_TYPE_UINT

#ifndef COLOR_H
#define COLOR_H

class Color;
class Color32;

class Color32
{
public:
	Color32();
	Color32(uint8 r, uint8 g, uint8 b, uint8 a = 255);
	Color32(const Color32& color);
	Color32(const Color& color);
	~Color32();

public:
	Color GetColor();
	void ToGray();

public:
	uint8 r, g, b, a;
};


class Color
{
public:
	Color();
	Color(float r, float g, float b,float a=1.0f);
	Color(float Gray);
	Color(const Color& color);
	Color(const Color32 & color);
	~Color();

public:
	Color32 GetColor32();
	void ToGray();

public:
	union 
	{
		struct 
		{
			float x, y, z, w;
		};
		struct 
		{
			float r, g, b, a;
		};
	};
};


#endif // !COLOR_H

