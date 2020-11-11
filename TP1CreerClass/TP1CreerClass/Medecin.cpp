#include "stdafx.h"
#include "Medecin.h"
using namespace std;
int Medecin::cmp = 0;
//Constructeur par défaut
Medecin::Medecin()
{
	Medecin::cmp++;
}
//Constructeur d'intialisation
Medecin::Medecin(int m, char * nom, char * prenom, char * spécialité, char * adresse, char * numTel)
{
	this->matricule = m;
	this->nom = nom;
	this->prenom = prenom;
	this->spécialité = spécialité;
	this->adresse = adresse;
	this->numTel = numTel;
	Medecin::cmp++;
}
//Constructeur de recopie
Medecin::Medecin(const Medecin & M)
{
	this->matricule = M.matricule;
	this->nom = M.nom;
	this->prenom = M.prenom;
	this->spécialité = M.spécialité;
	this->adresse = M.adresse;
	this->numTel = M.numTel;
	Medecin::cmp++;
}
//Compteur d'objet
int Medecin::CompterObj()
{
	return 	Medecin::cmp;
}
//Afficher les informations d'objet 
void Medecin::Afficher()
{
	cout << "Numero : " << this->matricule << " - " << this->nom << " " << this->prenom << " specialiste en " << this->spécialité << endl;
}
//Déstructeur
Medecin::~Medecin()
{
	delete this;
}
//Methode pour creer un medecin on utilisant un constructeur privé
Medecin Medecin::CreatMedecin(int m, char * nom, char * prenom)
{
	Medecin *M = new Medecin(m, nom, prenom);
	return *M;
}
//Un constructeur privé qui va instancier uniquement 3 attributs
Medecin::Medecin(int m, char * nom, char * prenom)
{
	this->matricule = m;
	this->nom = nom;
	this->prenom = prenom;
}
