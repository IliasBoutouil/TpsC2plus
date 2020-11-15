#include "stdafx.h"
#include "Compte.h"
#include <iostream>
using namespace std;
Compte::Compte()
{
	this->numCompte=0;
	this->nomProprietaire="";
	this->solde=0;
}

Compte::Compte(int Num, char * Nom, double Solde)
{
	this->numCompte = Num;
	this->nomProprietaire = Nom;
	this->solde= Solde;
}

bool Compte::retirerArgent(double montant)
{
	if (montant <= this->solde)
	{
		this->solde -= montant;
		return true;
	}
	return false;
}

void Compte::deposerArgent(double montant)
{
	this->solde+= montant;
}

void Compte::consulterSolde()
{
	cout << "Solde du compte numero "<< this->numCompte << " est : " << this->solde << "DH" << endl;
}

void Compte::transfererArgent(Compte &C, double montant)
{
	if (this->retirerArgent(montant))
	{
		//C.solde += montant;
		C.deposerArgent(montant);
		cout << "Vous avez transmis au compte numero : " << C.numCompte << " un montant de " << montant << "DH"<< endl;
	}
	else
		cout << "Solde insuffisant pour transmettre "<< montant << "DH" << endl;

}



double Compte::get_solde() const
{
	return this->solde;
}
