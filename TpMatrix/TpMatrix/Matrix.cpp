#include "stdafx.h"
#include "Matrix.h"
#include "assert.h"
#include <iostream>
using namespace std;
Matrix::Matrix(int lig, int col)
{
	this->lig = lig;
	this->col = col;
	this->matrice = new float*[lig];
	for (int i = 0; i < this->lig; i++)
	{
		this->matrice[i] = new float[col];
	}
	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			this->matrice[i][j] = 0;
		}
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < this->lig; i++)
	{
		
		delete[] this->matrice[i];
		this->matrice[i] = nullptr;
	}
	
	delete[]  this->matrice;
	this->matrice = nullptr;
}

Matrix & Matrix::operator+(const Matrix &M) const
{
	Matrix *Res=new Matrix(this->lig,this->col);
	for (int i = 0; i < this->lig; i++)
	{

		for (int j = 0; j < this->col; j++)
		{
			Res->matrice[i][j] = this->matrice[i][j] + M.matrice[i][j];
		}
	}
	return *Res;
}

Matrix & Matrix::operator*(const Matrix &M) const
{
	assert(this->lig == M.col);
	
	Matrix *Res = new Matrix(this->lig, M.col);
	for (int i = 0; i < this->lig; i++)
	{
		   
		for (int j = 0; j < this->col; j++)
		{
			float a = 0;
			for (int k = 0; k < M.col; k++)
			{
				a+= this->matrice[i][k] * M.matrice[k][j];
			}
			Res->matrice[i][j] = a;
		}
	}
	return *Res;
}

void Matrix::Remplir()
{
	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			cout << "Entre la valeur " << j << " de la ligne " << i << " :" << endl;
			cin >> this->matrice[i][j];
		}
	}
	cout << "----Fin Remplissage-----" << endl;

}

void Matrix::FromFile(char *filename)
{
	ifstream f;
	f.open(filename);
	float n;
		for (int i = 0; i < this->lig; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				f >> n;
				this->matrice[i][j] = n;
			}
		}

	f.close();
}


void Matrix::Afficher()const
{
	for (int i = 0; i < this->lig; i++)
	{
		cout << i << "  ";
		for (int j = 0; j < this->col; j++)
		{
			cout << this->matrice[i][j] << " ";
		}
		cout << "  " <<endl;
	}
}
