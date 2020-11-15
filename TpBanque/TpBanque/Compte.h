#pragma once

class Compte
{
private:
	int numCompte;
	char* nomProprietaire;
	double solde;
public:
	Compte();
	Compte(int,char*,double);
	bool retirerArgent(double );
	void deposerArgent(double );
	void consulterSolde();
	void transfererArgent(Compte &C, double);
	double get_solde() const;
};