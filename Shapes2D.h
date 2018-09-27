#include "Vec2.h"

using float VectorPrecision;

class LineSegment
{
	Vec2<VectorPrecision> start, end;
};

class ShapePrimitive 
{

};

class Circle : public ShapePrimitive
{
public:
	Vec2<VectorPrecision> center;
	VectorPrecision radius;
};

class Rectangle : public ShapePrimitive
{
public:
	Vec2<VectorPrecision> center, halfExtent;
	VectorPrecision orientation;
};
