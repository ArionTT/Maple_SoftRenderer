#ifndef VECTOR_H
#define VECTOR_H

#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2;
class Vector3;
class Vector4;

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);
	Vector2(const Vector2& vec);
	~Vector2();

public:
	float x, y;
};

#endif // !VECTOR2_H



#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
	static Vector3 Normalize(Vector3 vec);
	static Vector3 Up();
	static Vector3 Right();
	static Vector3 Forward();
	static Vector3 Zero();
	static Vector3 One();
	static float AngelDegree(Vector3 from, Vector3 to);
	static float AngelRadian(Vector3 from, Vector3 to);
	static Vector3 Mul(Vector3 a, Vector3 b);
	static float Dot(Vector3 a, Vector3 b);

public:
	Vector3();
	Vector3(float x, float y);
	Vector3(float x, float y, float z);
	Vector3(const Vector3& vec);

public:
	void normalize();

public:
	Vector3 operator +(Vector3 dist);
	Vector3 operator -(Vector3 dist);
	Vector3 operator *(float k);
	Vector3 operator /(float k);
	Vector3& operator =(const Vector3& dist);
	Vector3 operator *=(float k);
	Vector3 operator /=(float k);
	Vector3 operator +=(Vector3 dist);
	Vector3 operator -=(Vector3 dist);
	bool  operator ==(Vector3 dist);
	bool  operator !=(Vector3 dist);

public:
	float x, y, z;
	float magnitude;
};

#endif // !VECTOR3_H



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


#endif // !VECTOR_H

