#include"../MathBase/Vector.h"
#include<vector>

#ifndef BOUND_H
#define BOUND_H

class Bound
{
public:

};


#ifndef AABB_H
#define AABB_H

class AABB :public Bound
{
public:
	static void CreateBound(AABB* aabb);
	static void CreateBound(std::vector<Vector3> points, AABB*aabb);

public:
	void create(std::vector<Vector3> points);
	void empty();
	void add(Vector3 point);

public:
	Vector3 max;
	Vector3 min;
};

#endif // !AABB_H

#ifndef OBB_H
#define OBB_H

class OBB :public Bound
{
public:

};

#endif // !OBB_H


#endif // !BOUND_H





