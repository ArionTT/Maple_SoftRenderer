
#ifndef QUATERNION_H
#define QUATERNION_H


#include"Vector.h"
#include"Math.h"


class Quaternion
{
public:
	//通过旋转轴和旋转角度构建旋转四元数
	static Quaternion RotateByAngle(const Vector3& axis, float theta); 
	//按X轴旋转
	static Quaternion RotateX(float theta);
	//按Y轴旋转
	static Quaternion RotateY(float theta);
	//按Z轴旋转
	static Quaternion RotateZ(float theta);
	//单位四元数
	static Quaternion Identity();  
	//共轭四元数
	static Quaternion Conjugate(Quaternion quaternion); 
	//球面线性插值
	static Quaternion Slerp(const Quaternion& a, const Quaternion & b, float t);
	//四元数单位化
	static Quaternion Normalize(Quaternion quaternion);
	//四元数点乘
	static float Dot(const Quaternion& a, const Quaternion& b);
	//四元数幂
	static Quaternion Pow(const Quaternion& q, float exp);

public:
	Quaternion();
	Quaternion(float x, float y, float z, float w);
	Quaternion(const Quaternion& quaternion);
	~Quaternion();

public:
	//单位化
	void normalize();
	//获取旋转轴向量
	Vector3 getAxis() const;
	//获取旋转角度
	float getAngle() const;
	//构建四元数
	void rotateByAxis(const Vector3& axis, float theta);
	//按X轴旋转
	void rotateX( float theta);
	//按Y轴旋转
	void rotateY(float theta);
	//按Z轴旋转
	void rotateZ(float theta);

public:
	//四元数叉乘
	Quaternion operator*(const Quaternion& q);
	Quaternion& operator *=(const Quaternion& q);

public:
	float x, y, z;
	float w;

};

#endif // !QUATERNION_H

