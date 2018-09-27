#pragma once

template <typename T>
class Vec2
{
public:
	Vec2(T tx, T ty);

	Vec2<T> operator- (const Vec2& other) const;

	T distanceSquared();

	T x,y;
private:
};


