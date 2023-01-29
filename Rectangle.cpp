#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle():width(0), height(0)
{
}

Rectangle::Rectangle(const float& width, const float& height):width(width), height(height)
{
}

void Rectangle::Draw()
{
	printf("矩形の面積は%fcm平方メートル\n", Size());
}

float Rectangle::Size()
{
	return width * height;
}