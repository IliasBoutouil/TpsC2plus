// ProjectUse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
	Matrix M1 (2, 2);
	Matrix M2 (2, 2);
	M1.Afficher();
	cout << "----M1----" << endl;
	M1.Remplir();
	cout << "----M2----" << endl;
	M2.Remplir();
	cout << "----M1----" << endl;
	M1.Afficher();
	cout << "----M2----" << endl;
	M2.Afficher();
	cout << "----M3----" << endl;
	Matrix M3 = M1 * M2;
	M3.Afficher();
	Matrix M4(2,2);
	char* filename = "Matrice.txt";
	M4.FromFile(filename);
	M4.Afficher();
	int a;
	cin >> a;
	getchar();
    return 0;
}

