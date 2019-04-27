#ifdef MATRICESIMMEDIATES_EXPORTS
#define DllExport __declspec(dllexport) 
#else 
#define DllExport __declspec(dllimport) 
#endif

#ifndef MATRICES_H_
#define MATRICES_H_

#include "..\common.h"
#include <iostream>
#include <time.h>

class DllExport Matrix
{
public:

	//un constructeur cr�ant des matrices al�atoirement
	Matrix(bool random = false);

	//un constructeur prenant un tableau en entr�e
	Matrix(const double matrix[N][N]);

	//un constructeur de copie est n�cessaire pour ne pas copier uniquement le pointeur veur le double[N][N]
	Matrix(const Matrix &m);

	//une m�thode d'acc�s
	double get(int i, int j) const;

	//les op�rations entre matrices, d�clar�es en "friend"
	friend DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
	friend DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);


private:

	//tableau o� sont stock�s les coefficients de la matrice
	double _matrix[N][N];

};

DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);

#endif