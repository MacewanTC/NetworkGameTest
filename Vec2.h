template <typename T>
class Vec2
{
public:
	Vec2(T tx, T ty);
	T distanceSquared(const Vec2& other);
	T x,y;
private:
};


