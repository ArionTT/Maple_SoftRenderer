#ifndef MATH_H
#define MATH_H
#include<cmath>


namespace Math
{

	const int CINFINITY = 65535;

	float cos(float x);

	float sin(float x);

	float tan(float x);

	float acos(float x);

	float asin(float x);

	float atan(float x);

	float sqrt(float x);

	template<typename T>
	T max(T a, T b);

	template<typename T>
	T min(T a, T b);

	float lerp(float a, float b, float t);

	float mix(float a, float b, float t);

}


#endif // !MATH_H

