#pragma once
#include <fstream>
class Matrix
{
private :
	float **matrice;
	int lig, col;
public :
	Matrix(int, int);
	~Matrix();
	Matrix& operator+(const Matrix&)const;
	Matrix& operator*(const Matrix&)const;
	void Remplir();
	void FromFile(char*);
	void Afficher()const;
};