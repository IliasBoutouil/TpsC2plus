#pragma once
#include "Point.h"


class Cercle
{
private:
	double rayon;
	Point centre;
public:
	Cercle();
	Cercle(Point,double);
	void set_rayon(double);
	double get_rayon() const;
	double CalSurface();
	double CalPerimetre();
	bool operator==(Cercle C);
	bool CheckAppartenance(Point P);
	void Afficher();

};

