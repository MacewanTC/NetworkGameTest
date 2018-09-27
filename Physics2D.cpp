#include "Physics2D.h"

#include "Math.h"

namespace Physics2D
{
	bool isColliding(const Circle& circ1, const Circle& circ2)
	{
		return (circ1.center - circ2.center).distanceSquared() <= Math::square(circ1.radius + circ2.radius);
	}

		

};	
