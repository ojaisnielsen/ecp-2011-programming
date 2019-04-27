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

	//un constructeur créant des matrices aléatoirement
	Matrix(bool random = false);

	//un constructeur prenant un tableau en entrée
	Matrix(const double matrix[N][N]);

	//un constructeur de copie est nécessaire pour ne pas copier uniquement le pointeur veur le double[N][N]
	Matrix(const Matrix &m);

	//une méthode d'accés
	double get(int i, int j) const;

	//les opérations entre matrices, déclarées en "friend"
	friend DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
	friend DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);


private:

	//tableau où sont stockés les coefficients de la matrice
	double _matrix[N][N];

};

DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);

#endif