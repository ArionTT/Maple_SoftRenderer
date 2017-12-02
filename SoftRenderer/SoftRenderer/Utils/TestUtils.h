#pragma once
#include<iostream>
#include"../Base/Matrix4x4.h"
#include"../Base/Math.h"
#include"../Base/Quaternion.h"
#include"../Base/Timer.h"

using std::cout;
using std::cin;
using std::endl;


namespace Test
{
	void PrintVector(Vector3& dist)
	{
		cout << "vector3 ( " << dist.x << " , " << dist.y << " , " << dist.z << " ) " << endl;
	}

	void PrintVector(Vector4& dist)
	{
		cout << "vector4 ( " << dist.x << " , " << dist.y << " , " << dist.z <<" , "<<dist.w<< " ) " << endl;
	}

	void PrintMatrix(Matrix4x4& mat)
	{
		cout << "matrix : " << endl;
		cout << "  |  " << mat.m11 << " " << mat.m12 << " " << mat.m13 << " " << mat.m14 << "  |  " << endl;
		cout << "  |  " << mat.m21 << " " << mat.m22 << " " << mat.m23 << " " << mat.m24 << "  |  " << endl;
		cout << "  |  " << mat.m31 << " " << mat.m32 << " " << mat.m33 << " " << mat.m34 << "  |  " << endl;
		cout << "  |  " << mat.m41 << " " << mat.m42 << " " << mat.m43 << " " << mat.m44 << "  |  " << endl;
	}
}