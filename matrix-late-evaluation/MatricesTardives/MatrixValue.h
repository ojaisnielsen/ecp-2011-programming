#ifndef MATRIXVALUE_H_
#define MATRIXVALUE_H_

#include "..\common.h"
#include <time.h>
#include <stdlib.h>

class MatrixValue
{
public:

	//un constructeur cr�ant des matrices al�atoirement
	MatrixValue(bool random = false);
	//un constructeur prenant un tableau en entr�e
	MatrixValue(const double matrix[N][N]);
	//une m�thode d'acc�s
	double get(int i, int j) const;
protected:
	//tableau o� sont stock�s les coefficients de la matrice
	double _matrix[N][N];

	friend class CachedMatrixValue;
};


#endif