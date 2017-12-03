#include "Bound.h"

void AABB::CreateBound(AABB* aabb)
{
	aabb->empty();
}

void AABB::CreateBound(std::vector<Vector3> points,AABB*aabb)
{
	aabb->empty();

	for (size_t i = 0; i < points.size(); i++)
	{
		aabb->add(points[i]);
	}
}

void AABB::create(std::vector<Vector3> points)
{
	this->empty();

	for (int i = 0; i < points.size() ; i++)
	{
		this->add(points[i]);
	}
}

void AABB::empty()
{
	const float kBigNumber = 1e37f;
	min.x = min.y = min.z = kBigNumber;
	max.x = max.y = max.z = -kBigNumber;
}

void AABB::add(Vector3 point)
{

	if (point.x < min.x) min.x = point.x;
	if (point.y < min.y) min.y = point.y;
	if (point.y < min.z) min.z = point.z;

	if (point.x > max.x) max.x = point.x;
	if (point.y > max.y) max.y = point.y;
	if (point.z > max.z) max.z = point.z;

}
