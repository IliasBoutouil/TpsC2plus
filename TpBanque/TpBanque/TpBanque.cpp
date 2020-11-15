// TpBanque.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Compte.h"
#include <iostream>
using namespace std;
int main()
{

	Compte A(50003, "Ahmed Amine", 8050.175);
	A.deposerArgent(12000);
	A.consulterSolde();
	//-------------------
	A.retirerArgent(500);
	A.consulterSolde();
	//-------------------
	Compte B(50002, "Boutouil ilias", 1500);
	A.transfererArgent(B, 8000);
	A.consulterSolde();
	B.consulterSolde();
	A.transfererArgent(B, 80000);
	getchar();
    return 0;
}

