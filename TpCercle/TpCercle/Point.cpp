#include "stdafx.h"
#include "Point.h"

Point::Point()
{
	
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

bool Point::operator==(Point P)
{
	return this->x==P.x && this->y==P.y;
}

double Point::get_x() const
{
	return this->x;;
}

double Point::get_y() const
{
	return this->y;
}

// Solution pour les constructeurs privés
//Point Point::Creator(double x, double y)
//{
//	return Point(x,y);
//}
//
//Point Point::Creator()
//{
//	return Point();
//}
