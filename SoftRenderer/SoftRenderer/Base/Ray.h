#include"Vector.h"

#ifndef RAY_H
#define RAY_H

class Ray
{
public:
	Vector3 source;
	Vector3 direct;
	float distance;
};

#endif // !RAY_H

