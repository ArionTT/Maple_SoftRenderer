#include"Math.h"
#ifndef VECTOR3_H
#include"Vector3.h"
#endif // VECTOR3_H
#ifndef VECTOR4_H
#include"Vector4.h"
#endif // VECTOR4_H

Vector4::Vector4()
{
	x = y = z = 0.0f;
	w = 1.0f;
	magnitude = Math::sqrt(x*x + y*y + z*z);
}

Vector4::Vector4(float x, float y)
{
	this->x = x;
	this->y = y;
	z = 0.0f;
	w = 1.0f;
	magnitude = Math::sqrt(x*x + y*y + z*z);
}

Vector4::Vector4(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	w = 1.0f;
	magnitude = Math::sqrt(x*x + y*y + z*z);
}

Vector4::Vector4(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
	magnitude = Math::sqrt(x*x + y*y + z*z);
}

Vector4::Vector4(const Vector4 & src)
{
	this->x = src.x;
	this->y = src.y;
	this->z = src.z;
	this->w = src.w;
	magnitude = src.magnitude;
}

void Vector4::normalize()
{
	x /= magnitude;
	y /= magnitude;
	z /= magnitude;
	magnitude = 1.0f;
}

Vector4 Vector4::operator+(Vector4 dist)
{
	return Vector4(x + dist.x, y + dist.y, z + dist.z, w);
}

Vector4 Vector4::operator-(Vector4 dist)
{
	return Vector4(x - dist.x, y - dist.y, z - dist.z, w);
}

Vector4 Vector4::operator*(float k)
{
	return Vector4(x *k, y *k, z *k, w);
}

Vector4 Vector4::operator/(float k)
{
	if (!k)
		return Vector4(INFINITY, INFINITY, INFINITY, 0.0f);

	return Vector4(x /k, y /k, z /k, w);
}

Vector4 & Vector4::operator=(const Vector4 & dist)
{
	if (&dist == this)
		return *this;
	else
	{
		this->x = dist.x;
		this->y = dist.y;
		this->z = dist.z;
		return *this;
	}
}

Vector4 Vector4::operator*=(float k)
{
	x *= k;
	y *= k;
	z *= k;
	return *this;
}

Vector4 Vector4::operator/=(float k)
{
	x /= k;
	y /= k;
	z /= k;
	return *this;
}

Vector4 Vector4::operator+=(Vector4 dist)
{
	x += dist.x;
	y += dist.y;
	z += dist.z;
	return *this;
}

Vector4 Vector4::operator-=(Vector4 dist)
{
	x -= dist.x;
	y -= dist.y;
	z -= dist.z;
	return *this;
}

bool Vector4::operator==(Vector4 dist)
{
	Vector4 v = dist - *this;
	if (v.x == 0.0f&&v.y == 0.0f&&v.z == 0.0f)
		return true;
	else
		return false;
}

bool Vector4::operator!=(Vector4 dist)
{
	Vector4 v = dist - *this;
	if (v.x == 0.0f&&v.y == 0.0f&&v.z == 0.0f)
		return false;
	else
		return true;
}

Vector4 Vector4::Normalize(Vector4 dist)
{
	dist.x /= dist.magnitude;
	dist.y /= dist.magnitude;
	dist.z /= dist.magnitude;
	dist.magnitude = 1.0f;
	return dist;
}

Vector4 Vector4::Up()
{
	return Vector4(0.0f,1.0f,0.0f);
}

Vector4 Vector4::Right()
{
	return Vector4(0.0f,0.0f,1.0f);
}

Vector4 Vector4::Forward()
{
	return Vector4(1.0f,0.0f,0.0f);
}

Vector4 Vector4::Zero()
{
	return Vector4(0.0f,0.0f,0.0f);
}

Vector4 Vector4::One()
{
	return Vector4(1.0f,1.0f,1.0f);
}

float Vector4::AngelDegree(Vector4 from, Vector4 to)
{
	return 0.0f;
}

float Vector4::AngelRadian(Vector4 from, Vector4 to)
{
	return 0.0f;
}

Vector4 Vector4::Mul(Vector4 a, Vector4 b)
{
	return Vector4();
}

float Vector4::Dot(Vector4 a, Vector4 b)
{
	return 0.0f;
}
