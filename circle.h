// Name: Macintyre Sunde
// Date: 15/02/21

#pragma once
#include <iostream>
#include <math.h>

// your code here

#define LOG(x) std::cout << x << std::endl
#define ASSERT(x, message) if(x) { LOG("Assertion failed!"); LOG(message); __debugbreak(); }

static int PI = 3.1415;
class Circle
{
public:
	Circle(float radius) : m_Radius(radius) {};
	Circle() = default;
	~Circle() = default;

	void setRadius(float radius) { m_Radius = radius; }
	float getRadius() const { return m_Radius; }
	float computeArea() const;

	Circle operator+(const Circle& other)
	{
		return Circle(m_Radius + other.getRadius());
	}

private:
	float m_Radius;
};

std::ostream& operator<<(std::ostream& out, const Circle& c);

template <class T>
float getArea(const void* shape);

template <>
float getArea<Circle>(const void* shape);