// TpCercle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Point.h"
#include "Cercle.h"
#include <iostream>
using namespace std;
int main()
{
	/*Point P=Point::Creator(3, 4);
	Point P2 = Point::Creator(-2, 4);*/
	Point P = Point(3, 4);
	Point P2 = Point(-2, 4);
	Cercle C(P, 4);
	Cercle C2(P, 5);
	C.Afficher();
	cout << " Surface = " << C.CalSurface() << endl;
	cout << " Perimetre = " << C.CalPerimetre() << endl;
	cout << " Test Degalite = " << (C == C2) << endl;
	cout << " Test d'appartenance du point = " << C.CheckAppartenance(P2) << endl;
	getchar();
    return 0;
}

