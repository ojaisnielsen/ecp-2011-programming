#ifndef MATRIXVALUE_H_
#define MATRIXVALUE_H_

#include "..\common.h"
#include <time.h>
#include <stdlib.h>

class MatrixValue
{
public:

	//un constructeur créant des matrices aléatoirement
	MatrixValue(bool random = false);
	//un constructeur prenant un tableau en entrée
	MatrixValue(const double matrix[N][N]);
	//une méthode d'accés
	double get(int i, int j) const;
protected:
	//tableau où sont stockés les coefficients de la matrice
	double _matrix[N][N];

	friend class CachedMatrixValue;
};


#endif