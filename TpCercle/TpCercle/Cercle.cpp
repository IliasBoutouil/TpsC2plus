#include "stdafx.h"
#include "Cercle.h"
#include <math.h>
#include <iostream>
#include <string>

using namespace std;
void Cercle::set_rayon(double R)
{
	this->rayon = R;
}



double Cercle::get_rayon() const
{
	return this->rayon;
}

double Cercle::CalSurface()
{
	return pow(this->rayon,2)*3.14;
}

double Cercle::CalPerimetre()
{
	return 2 * 3.14 * this->rayon;
}

bool Cercle::operator==(Cercle C)
{
	return this->rayon==C.rayon && this->centre==C.centre;
}

bool Cercle::CheckAppartenance(Point p)
{

	if (pow(this->centre.get_x() - p.get_x(), 2) + pow(this->centre.get_y() - p.get_y(), 2) == pow(this->rayon, 2))
		return true;
	return false;
}

void Cercle::Afficher()
{
	string s = "Centre : (" + to_string(this->centre.get_x()) + " , " + to_string(this->centre.get_y()) + ")" + " Rayon :" + to_string(this->rayon) + " cm";
		cout << s<<endl;
}

Cercle::Cercle()
{
	this->rayon = 0.0;
	this->centre=Point();
}

Cercle::Cercle(Point C, double R)
{
	this->rayon = R;
	this->centre = C;
}
