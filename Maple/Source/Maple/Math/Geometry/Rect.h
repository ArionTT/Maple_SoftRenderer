#ifndef VECTOR_H
#include"../MathBase/Vector.h"

#endif // !VECTOR_H

#ifndef RECT_H

class Rect
{
public:
	Rect();
	Rect(float w, float h);
	Rect(float x, float y, float w, float h);
	Rect(Vector2 pos, Vector2 size);
	Rect(const Rect& rect);
	~Rect();

public:
	float x, y;
	float width, height;
};

#endif // !RECT_H

