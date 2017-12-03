#include"Vector.h"
#include"Math.h"

Vector3::Vector3()
{
	x = y = z = 0.0f;
	magnitude = 0.0f;
}

Vector3::Vector3(float x, float y)
{
	this->x = x;
	this->y = y;
	z = 0.0f;
	magnitude = Math::sqrt(x*x + y*y);
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	magnitude = Math::sqrt(x*x + y*y + z*z);
}

Vector3::Vector3(const Vector3& src)
{
	x = src.x;
	y = src.y;
	z = src.z;
}

Vector3 Vector3::Normalize(Vector3 vec)
{
	vec.x /= vec.magnitude;
	vec.y /= vec.magnitude;
	vec.z /= vec.magnitude;
	vec.magnitude = 1.0f;
	return vec;
}

Vector3 Vector3::Up()
{
	return Vector3(0.0f, 1.0f, 0.0f);
}

Vector3 Vector3::Right()
{
	return Vector3(0.0f, 0.0f, 1.0f);
}

Vector3 Vector3::Forward()
{
	return Vector3(1.0f, 0.0f, 0.0f);
}

Vector3 Vector3::Zero()
{
	return Vector3(0.0f, 0.0f, 0.0f);
}

Vector3 Vector3::One()
{
	return Vector3(1.0f, 1.0f, 1.0f);
}

float Vector3::AngelDegree(Vector3 from, Vector3 to)
{
	return 0.0f;
}

float Vector3::AngelRadian(Vector3 from, Vector3 to)
{
	return 0.0f;
}

Vector3 Vector3::Mul(Vector3 src, Vector3 dist)
{
	float x, y, z;
	x = src.y*dist.z - src.z*dist.y;
	y = src.z*dist.x - src.x*dist.z;
	z = src.x*dist.y - src.y*dist.x;
	return Vector3(x, y, z);
}

float Vector3::Dot(Vector3 a, Vector3 b)
{
	return a.x*b.x + a.y*b.y + a.z*b.z;
}

void Vector3::normalize()
{
	x /= magnitude;
	y /= magnitude;
	z /= magnitude;
	magnitude = 1.0f;
}

Vector3 Vector3::operator +(Vector3 dist)
{
	return Vector3(x + dist.x, y + dist.y, z + dist.z);
}

Vector3 Vector3::operator -(Vector3 dist)
{
	return Vector3(x - dist.x, y - dist.y, z - dist.z);
}

Vector3 Vector3::operator *(float k)
{
	return Vector3(x*k, y*k, z*k);
}

Vector3 Vector3::operator /(float k)
{
	return Vector3(x / k, y / k, z / k);
}

Vector3& Vector3::operator =(const Vector3& dist)
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

Vector3 Vector3::operator *=(float k)
{
	x *= k;
	y *= k;
	z *= k;
	return *this;
}

Vector3 Vector3::operator /=(float k)
{
	x /= k;
	y /= k;
	z /= k;
	return *this;
}

Vector3 Vector3::operator +=(Vector3 dist)
{
	x += dist.x;
	y += dist.y;
	z += dist.z;
	return *this;
}

Vector3 Vector3::operator -=(Vector3 dist)
{
	x -= dist.x;
	y -= dist.y;
	z -= dist.z;
	return *this;
}

bool  Vector3::operator ==(Vector3 dist)
{
	Vector3 v = dist - *this;
	if (v.x == 0.0f&&v.y == 0.0f&&v.z == 0.0f)
		return true;
	else
		return false;
}

bool  Vector3::operator !=(Vector3 dist)
{
	Vector3 v = dist - *this;
	if (v.x == 0.0f&&v.y == 0.0f&&v.z == 0.0f)
		return false;
	else
		return true;
}



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

	return Vector4(x / k, y / k, z / k, w);
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
	return Vector4(0.0f, 1.0f, 0.0f);
}

Vector4 Vector4::Right()
{
	return Vector4(0.0f, 0.0f, 1.0f);
}

Vector4 Vector4::Forward()
{
	return Vector4(1.0f, 0.0f, 0.0f);
}

Vector4 Vector4::Zero()
{
	return Vector4(0.0f, 0.0f, 0.0f);
}

Vector4 Vector4::One()
{
	return Vector4(1.0f, 1.0f, 1.0f);
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

Vector2::Vector2()
{
	x = y = 0.0f;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2::Vector2(const Vector2 & vec)
{
	x = vec.x;
	y = vec.y;
}

Vector2::~Vector2()
{
}
