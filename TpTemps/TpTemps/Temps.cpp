#include "stdafx.h"
#include "Temps.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->minute = m;
	this->seconde = s;
}

void Temps::ShowFrTime()
{
	string h ;
	string m ;
	string s ;
	if (this->heure < 10)
		h = "0" + to_string(this->heure);
	 if(this->minute < 10)
		m = "0" + to_string(this->minute);	
	if (this->seconde < 10)
		s = "0" +to_string(this->seconde);
	 if (this->heure >= 10)
		h = to_string(this->heure);
	 if (this->minute >= 10)
		m = to_string(this->minute);
	if (this->seconde >= 10)
		s = to_string(this->seconde);
	
	string time ="Heure Francaise = "+ h + ":" + m + ":"+s;
	cout << time << endl;
}

void Temps::ShowEngTime()
{
	string h;
	string mode=" am";
	switch (this->heure)
	{
	case 13:
		h = "01";
		break;
	case 14:
		h = "02";
		break;
	case 15:
		h = "03";
		break;
	case 16:
		h = "04";
		break;
	case 17:
		h = "05";
		break;
	case 18:
		h = "06";
		break;
	case 19:
		h = "07";
		break;
	case 20:
		h = "08";
		break;
	case 21:
		h = "09";
		break;
	case 22:
		h = "10";
		break;
	case 23:
		h = "11";
		break;
	default :
			h = to_string(this->heure);
		break;
	}
	if (this->heure > 12)
	{
		mode = " pm";
	}
	string m;
	string s;
	
	if (this->minute < 10)
		m = "0" + to_string(this->minute);
	if (this->seconde < 10)
		s = "0" + to_string(this->seconde);
	
	if (this->minute >= 10)
		m = to_string(this->minute);
	if (this->seconde >= 10)
		s = to_string(this->seconde);

	string time ="Heure Anglaise = "+ h + ":" + m + ":" + s+mode;
	cout << time << endl;
	//char tab[] = {'12','13','14','15','16','17','18','19','20','21','22','23','0'};
	//string time = to_string((tab[this->heure]))+ ":" + to_string(tab[this->minute]) + ":" + to_string(tab[this->seconde]);
	//cout << time << endl;
}

bool Temps::CompareTo(Temps T)
{
	if (this->heure > T.heure)
		return true;
	if (this->heure < T.heure)
		return false;
	if (this->heure == T.heure)
	{
		if (this->minute > T.minute)
			return true;
		if (this->minute < T.minute)
			return false;
		if (this->minute == T.minute)
		{
			if (this->seconde > T.seconde)
				return true;
			if (this->seconde < T.seconde)
				return false;
		}
	}

			
}
