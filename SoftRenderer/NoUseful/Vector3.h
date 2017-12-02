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

public :
	float x, y, z;
	float magnitude;
};

#endif // !VECTOR3_H
