// TpPile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pile.h"
#include <iostream>
int main()
{
	Pile *P = new Pile();
	Pile *P2 = new Pile();
	//ajouter des élément à la pile
	P->empiler(12);
	P->empiler(13);
	P->empiler(14);
	P->empiler(15);
	P->empiler(16);
	std::cout << "La pile contient "<<P->showLen()<<" objets" << std::endl;
	//la valeur du sommet de la pile
	std::cout << "Le sommet de la pile est : " << P->sommet() << std::endl;
	//la pille 
	P->afficherPile();
	P2->afficherPile();
	// Test si vide 
	std::cout << (P->pileVide() ? "Pile vide" : "Pile non vide") << std::endl;
	P->depiler();
	P->depiler();
	P->afficherPile();
	std::cout << "Le sommet de la pile est : " << P->sommet() << std::endl;
	P->Reverse();
	P->afficherPile();
	std::cout << "Le sommet de la pile est : " << P->sommet() << std::endl;
	getchar();
    return 0;
}

