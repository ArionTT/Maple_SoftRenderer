#ifndef VECTOR4_H
#define VECTOR4_H


class Vector4
{
public:
	static Vector4 Normalize(Vector4 dist);
	static Vector4 Up();
	static Vector4 Right();
	static Vector4 Forward();
	static Vector4 Zero();
	static Vector4 One();
	static float AngelDegree(Vector4 from, Vector4 to);
	static float AngelRadian(Vector4 from, Vector4 to);
	static Vector4 Mul(Vector4 a, Vector4 b);
	static float Dot(Vector4 a, Vector4 b);

public:
	Vector4();
	Vector4(float x, float y);
	Vector4(float x, float y, float z);
	Vector4(float x, float y, float z, float w);
	Vector4(const Vector4& src);

public:
	void normalize();

public:
	Vector4 operator +(Vector4 dist);
	Vector4 operator -(Vector4 dist);
	Vector4 operator *(float k);
	Vector4 operator /(float k);
	Vector4& operator =(const Vector4& dist);
	Vector4 operator *=(float k);
	Vector4 operator /=(float k);
	Vector4 operator +=(Vector4 dist);
	Vector4 operator -=(Vector4 dist);
	bool  operator ==(Vector4 dist);
	bool  operator !=(Vector4 dist);

public:
	float x, y, z, w;
	float magnitude;
};


#endif // !VECTOR4_H

