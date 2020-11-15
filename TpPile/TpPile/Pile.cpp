#include "stdafx.h"
#include "Pile.h"
#include <iostream>


Pile::Pile()

{
	this->Elements = new int[ind];
	this->ind = 0;
}

void Pile::empiler(int i)
{
	this->Elements[ind] = i;
	this->ind++;
}

void Pile::depiler()
{
	this->ind--;
}

bool Pile::pileVide()
{ 
	if(ind ==0)
		return true;
	else
	return false;
}

void Pile::afficherPile()
{
	
	for (int i = 0; i< ind; i++)
		std::cout << this->Elements[i] << std::endl;
}

int Pile::sommet()
{
	return this->Elements[ind -1];
}

int Pile::showLen()
{
	return ind;
}

void Pile::Reverse()
{
	int *tab=new int[ind];
	for (int i = 0; i< ind; i++)
		tab[ind-1-i]= Elements[i];
	for (int i = 0; i< ind; i++)
		Elements[i] = tab[i];
}


