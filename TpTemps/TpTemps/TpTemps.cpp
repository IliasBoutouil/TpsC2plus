// TpTemps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Temps.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Temps T(18,30,42);
	T.ShowFrTime();
	T.ShowEngTime();
	int heure;
	int minute;
	int seconde;
	char mode;
	cout << "Donnez l'heure"<<endl;
	cin >> heure;
	cout << "Donnez les minutes" << endl;
	cin >> minute;
	cout << "Donnez les secondes" << endl;
	cin >> seconde;
	Temps T2(heure, minute, seconde);
	cout << "Donnez le type d'affichage ('A' : Anglaise ou 'F' : Francaise)" << endl;
	cin >> mode;
	if(mode=='F')
		T2.ShowFrTime();
	else
	T2.ShowEngTime();
	//inférieur ou supérieur 
	Temps T3(13, 25,30);
	cout << (T2.CompareTo(T3) ? "superieur" : "inferieur" )<< endl;
    return 0;
}

