#include "Circle.h"
#include <iostream>

Circle::Circle()
{
}

Circle::Circle(const float& radius)
{
}

void Circle::Draw()
{
	printf("円の面積は%f平方メートル\n", Size());
}

float Circle::Size()
{
	return radius * radius * PI;
}