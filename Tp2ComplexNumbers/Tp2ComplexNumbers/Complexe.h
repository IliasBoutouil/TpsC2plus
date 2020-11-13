#pragma once

class Complexe
{
private : 
	double m_Re;
	double m_Img;
public :
	Complexe();
	Complexe(double,double);
	Complexe(const Complexe &C);
	void Afficher();
	double CalModudle();
	Complexe CalConjugé();
	Complexe operator+(const Complexe &C);
	Complexe operator+(double D);
	Complexe operator*(const Complexe &C);
	bool operator==(const Complexe &C);

};