#include "Color32.h"

Color32::Color32()
{
	r = g = b = a = 255;
}

Color32::Color32(uint8 r, uint8 g, uint8 b, uint8 a)
{
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

Color32::Color32(const Color32 & color)
{
	r = color.r;
	g = color.g;
	b = color.b;
	a = color.a;
}

Color32::Color32(const Color & color)
{
	r = static_cast<uint8>(color.r * 255);
	g = static_cast<uint8>(color.g * 255);
	b = static_cast<uint8>(color.b * 255);
	a = static_cast<uint8>(color.a * 255);
}

Color32::~Color32()
{
}
