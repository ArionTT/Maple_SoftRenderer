#include"Math.h"


namespace Math
{
	float cos(float x)
	{
		return cosf(x);
	}

	float sin(float x)
	{
		return sinf(x);
	}

	float tan(float x)
	{
		return sin(x) / cos(x);
	}

	float acos(float x)
	{
		return 0.0f;
	}

	float asin(float x)
	{
		return 0.0f;
	}

	float atan(float x)
	{
		return 0.0f;
	}

	float sqrt(float x)
	{
		return sqrtf(x);
	}

	template<typename T>
	T max(T a, T b)
	{
		return a > b ? a : b;
	}

	template<typename T>
	T min(T a, T b)
	{
		return a < b ? a : b;
	}

	float lerp(float a, float b, float t)
	{
		//float d = b-a;
		//return (a+d)*t+d;
		return (t + 1)*b - a;
	}

	float mix(float a, float b, float t)
	{
		return a*t + b*(1 - t);
	}
}