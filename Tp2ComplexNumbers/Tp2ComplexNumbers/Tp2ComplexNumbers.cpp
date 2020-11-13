// Tp2ComplexNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complexe.h"
#include <math.h>
using namespace std;

int main()
{
	//instantiation
	Complexe C1,C4,C5,C6;
	Complexe C2(5.2, 3.16);
	Complexe C2_1(7.2, 3);
	//Methode Afficher
	C1.Afficher();
	C2.Afficher();
	Complexe C3(C2); // Constructeur de recopie
	C3.Afficher();
	C4 = C2.CalConjugé(); // Calcule du conjugé
	C4.Afficher();
	cout<< C2.CalModudle()<<endl; //Calcule du module
	C5 = C2 + C2_1; // opérateur + 
	C6 = C2 * C2_1; // opérateur *
	C5.Afficher();
	C6.Afficher();
	cout << (C2==C2_1) << endl; // comparé 2 nombres complexe
	getchar();
    return 0;
}

