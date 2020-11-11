// TP1CreerClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Medecin.h"
using namespace std;

int main()
{
	Medecin *M1 = new Medecin(1152, "Boutouil", "Ilias", "Cardiologie", "Emsi Casablanca", "0522000001");
	Medecin M1_2(115, "Alami", "Reda", "Cardiologie", "Emsi Casablanca", "0522000002");
	Medecin M2(*M1);
	Medecin M3(M1_2);
	M1->Afficher();
	M2.Afficher();
	M3.Afficher();
	Medecin M4 = Medecin::CreatMedecin(1245, "Zarnouni", "Salma");
	//M4.Afficher();
	cout << " il y a " << Medecin::CompterObj() << " objets " << endl;
	getchar();
	return 0;
}

