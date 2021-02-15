#include "circle.h"

// your code here

float Circle::computeArea() const
{
    return getArea<Circle>(this);
}

std::ostream& operator<<(std::ostream& out, const Circle& c)
{
	out << c.getRadius(); // for example
	return out;
}

template <class T>
float getArea(const void* shape)
{
	ASSERT(0, "Invalid template");
	return 0;
}

template <>
float getArea<Circle>(const void* shape)
{
	Circle c = *(Circle*)shape;
	return pow(c.getRadius(), 2) * PI;
}