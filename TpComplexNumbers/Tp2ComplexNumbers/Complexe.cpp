#include "stdafx.h"
#include "Complexe.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;
Complexe::Complexe()
{
	this->m_Re = 0.0;
	this->m_Img = 0.0;
}

Complexe::Complexe(double R, double I)
{
	
	this->m_Re =  R;
	this->m_Img = I;
	
}

Complexe::Complexe(const Complexe & C)
{
	this->m_Re =C.m_Re;
	this->m_Img = C.m_Img;
}

void Complexe::Afficher()
{
	string s;
	if (this->m_Img > 0)
		 s = "(" + to_string(this->m_Re) + "+" + to_string(this->m_Img) + "i)";
	else
		 s = "(" + to_string(this->m_Re) + to_string(this->m_Img) + "i)";
	
	cout << s << endl;
}

double Complexe::CalModudle()
{
	return sqrt(pow(this->m_Re,2)+ pow(this->m_Re, 2));
}

Complexe Complexe::CalConjugé()
{
	Complexe R;
	R.m_Re = this->m_Re;
	R.m_Img = -this->m_Img;
	return R;
}

Complexe Complexe::operator+(const Complexe & C)
{
	Complexe R;
	R.m_Re = this->m_Re+C.m_Re;
	R.m_Img = this->m_Img+C.m_Img;
	return R;
}

Complexe Complexe::operator+(double D)
{
	Complexe R;
	R.m_Re = this->m_Re + D;
	R.m_Img = this->m_Img;
	return R;
}

Complexe Complexe::operator*(const Complexe &C)
{
	Complexe R;
	R.m_Re = (this->m_Re * C.m_Re)- (this->m_Img * C.m_Img);
	R.m_Img = (this->m_Re * C.m_Img) + (this->m_Img * C.m_Re);
	return R;
}

bool Complexe::operator==(const Complexe & C)
{
	return this->m_Re == C.m_Re && this->m_Img == C.m_Img;
}
