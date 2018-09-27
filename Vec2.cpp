#include "Vec2.h"

template <typename T>
Vec2<T>::Vec2(T tx, T ty): x(tx), y(ty){}

template <typename T>
Vec2<T> Vec2<T>::operator- (const Vec2<T>& other) const 
{
	return Vec2<T>(x-other.x, y-other.y);
}

