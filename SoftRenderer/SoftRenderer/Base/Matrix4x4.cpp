#include"Math.h"
#include "Matrix4x4.h"

Vector4 Matrix4x4::MultiplyVector(const Vector4 & vector, const Matrix4x4 & mat)
{
	Vector4 *v = new Vector4();
	v->x += vector.x*mat.m11 + vector.y*mat.m21 + vector.z*mat.m31+vector.w*mat.m41;
	v ->y+= vector.x*mat.m12 + vector.y*mat.m22 + vector.z*mat.m32 + vector.w*mat.m42;
	v->z += vector.x*mat.m13 + vector.y*mat.m23 + vector.z*mat.m33 + vector.w*mat.m43;
	v->w += vector.x*mat.m14 + vector.y*mat.m24 + vector.z*mat.m34 + vector.w*mat.m44;

	return *v;
}

Matrix4x4 Matrix4x4::MultiplyMatrix(const Matrix4x4 & mat1, const Matrix4x4 & mat2)
{
	return Matrix4x4();
}

Matrix4x4 Matrix4x4::IdentityMatrix()
{
	return Matrix4x4();
}

Matrix4x4 Matrix4x4::InverseMatrix(Matrix4x4 & mat)
{
	return Matrix4x4();
}

Matrix4x4 Matrix4x4::TransposeMatrix(Matrix4x4 & mat)
{
	return Matrix4x4();
}

float Matrix4x4::Deteminant(Matrix4x4 mat)
{
	float det = mat.m11*mat.m22*mat.m33 + mat.m21*mat.m32*mat.m13 + mat.m12*mat.m23*mat.m31;
	det -= mat.m13*mat.m22 * mat.m31 + mat.m12*mat.m21*mat.m33 + mat.m23*mat.m32*mat.m11;
	return det;
}

Matrix4x4::Matrix4x4()
{
	m11 = m22 = m33 = m44 = 1;
	m12 = m13 = m14 = 0;
	m21 = m23 = m24 = 0;
	m32 = m31 = m34 = 0;
	m41 = m42 = m43 = 0;

}

Matrix4x4::Matrix4x4(Vector3& line1, Vector3& line2, Vector3& line3)
{
	v1.x = line1.x;
	v1.y = line1.y;
	v1.z = line1.z;
	v1.w = 0.0f;

	v2.x = line2.x;
	v2.y = line2.y;
	v2.z = line2.z;
	v2.w = 0.0f;

	v3.x = line3.x;
	v3.y = line3.y;
	v3.z = line3.z;
	v3.w = 0.0f;

	v4.x = 0.0f;
	v4.y = 0.0f;
	v4.z = 0.0f;
	v4.w = 1.0f;

}

Matrix4x4::Matrix4x4(const Matrix4x4 & Mat)
{
	m11 = Mat.m11;
	m12 = Mat.m12;
	m13 = Mat.m13;
	m14 = Mat.m14;

	m21 = Mat.m21;
	m22 = Mat.m22;
	m23 = Mat.m23;
	m24 = Mat.m24;

	m31 = Mat.m31;
	m32 = Mat.m32;
	m33 = Mat.m33;
	m34 = Mat.m34;	

	m41 = Mat.m41;
	m42 = Mat.m42;
	m43 = Mat.m43;
	m44 = Mat.m44;
}

float Matrix4x4::determinant()
{
	float det=m11*m22*m33 + m21*m32*m13 + m12*m23*m31;
	det -= m13*m22 * 31 + m12*m21*m33 + m23*m32*m11;
	return det;
}

Matrix4x4 Matrix4x4::operator+(Matrix4x4 dist)
{
	m11 += dist.m11;
	m12 += dist.m12;
	m13 += dist.m13;
	m14 += dist.m14;

	m21 += dist.m21;
	m22 += dist.m22;
	m23 += dist.m23;
	m24 += dist.m24;

	m31 += dist.m31;
	m32 += dist.m32;
	m33 += dist.m33;
	m34 += dist.m34;

	m41 += dist.m41;
	m42 += dist.m42;
	m43 += dist.m43;
	m44 += dist.m44;

	return *this;
}

Matrix4x4 Matrix4x4::operator-(Matrix4x4 dist)
{
	m11 -= dist.m11;
	m12 -= dist.m12;
	m13 -= dist.m13;
	m14 -= dist.m14;

	m21 -= dist.m21;
	m22 -= dist.m22;
	m23 -= dist.m23;
	m24 -= dist.m24;

	m31 -= dist.m31;
	m32 -= dist.m32;
	m33 -= dist.m33;
	m34 -= dist.m34;

	m41 -= dist.m41;
	m42 -= dist.m42;
	m43 -= dist.m43;
	m44 -= dist.m44;

	return *this;
}

Matrix4x4 Matrix4x4::operator*(float k)
{
	m11 *= k;
	m12 *= k;
	m13 *= k;
	m14 *= k;

	m21 *= k;
	m22 *= k;
	m23 *= k;
	m24 *= k;

	m31 *= k;
	m32 *= k;
	m33 *= k;
	m34 *= k;

	m41 *= k;
	m42 *= k;
	m43 *= k;
	m44 *= k;

	return *this;
}

Matrix4x4 Matrix4x4::operator/(float k)
{
	if (!k)
		return Matrix4x4();

	m11 /= k;
	m12 /= k;
	m13 /= k;
	m14 /= k;

	m21 /= k;
	m22 /= k;
	m23 /= k;
	m24 /= k;

	m31 /= k;
	m32 /= k;
	m33 /= k;
	m34 /= k;

	m41 /= k;
	m42 /= k;
	m43 /= k;
	m44 /= k;

	return *this;
}

Matrix4x4 & Matrix4x4::operator=(const Matrix4x4 & dist)
{
	if (&dist == this)
		return *this;
	else
	{
		m11 = dist.m11;
		m12 = dist.m12;
		m13 = dist.m13;
		m14 = dist.m14;

		m21 = dist.m21;
		m22 = dist.m22;
		m23 = dist.m23;
		m24 = dist.m24;

		m31 = dist.m31;
		m32 = dist.m32;
		m33 = dist.m33;
		m34 = dist.m34;

		m41 = dist.m41;
		m42 = dist.m42;
		m43 = dist.m43;
		m44 = dist.m44;
		return *this;
	}
}

Matrix4x4 Matrix4x4::operator*=(float k)
{
	(*this) *= k;
	return *this;
}

Matrix4x4 Matrix4x4::operator/=(float k)
{
	(*this) /= k;
	return *this;
}

Matrix4x4 Matrix4x4::operator+=(Matrix4x4 dist)
{
	(*this) += dist;
	return *this;
}

Matrix4x4 Matrix4x4::operator-=(Matrix4x4 dist)
{
	(*this) -= dist;
	return *this;
}

bool Matrix4x4::operator==(Matrix4x4 dist)
{
	return false;
}

bool Matrix4x4::operator!=(Matrix4x4 dist)
{
	return false;
}
