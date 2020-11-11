#pragma once
#include <iostream>

class Medecin
{
	//Les attributs de la classe Medecin
private :
	int matricule;
	char* nom;
	char* prenom;
	char* adresse; 
	char* spécialité;
	char* numTel;
	//Compteur static
	static int cmp;
public :
	//Les Constructeurs de la classe
	Medecin(); 
	Medecin(int, char*, char*, char*, char*, char*);
	Medecin(const Medecin &M);
private:
	Medecin(int, char*, char*);
public:
	//Les Méthodes de la classe
	static int CompterObj();
	void Afficher();
	static Medecin CreatMedecin(int, char*, char*);
	//Déstructeur
	~Medecin();
	

};