#pragma once

class Point
{
private:
	double x;
	double y;
	//Point();
	//Point(double,double);
public:
	Point();
	Point(double, double);
	bool operator==(Point P);
	double get_x() const;
	double get_y() const;
	/*static Point Creator(double, double);
	static Point Creator();*/


};