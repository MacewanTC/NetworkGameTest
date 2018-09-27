#pragma once
#include "Vec2.h"

namespace Physics2D 
{
	using PhysicsPrecision = float;

	class LineSegment
	{
		Vec2<PhysicsPrecision> start, end;
	};

	class ShapePrimitive 
	{

	};

	class Circle : public ShapePrimitive
	{
	public:
		Vec2<PhysicsPrecision> center;
		PhysicsPrecision radius;
	};

	class Rectangle : public ShapePrimitive
	{
	public:
		Vec2<PhysicsPrecision> center, halfExtent;
		PhysicsPrecision orientation;
	};
};
