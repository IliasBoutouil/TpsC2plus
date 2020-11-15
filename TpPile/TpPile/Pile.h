#pragma once
class Pile
{

private:
	int *Elements;
	int ind;
public:

	Pile();
	void empiler(int);
	void depiler();
	bool pileVide();
	void afficherPile();
	int sommet();
	int showLen();
	void Reverse();
	

};

