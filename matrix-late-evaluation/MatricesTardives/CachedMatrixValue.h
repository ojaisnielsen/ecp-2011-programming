#ifndef CACHEDMATRIXVALUE_H_
#define CACHEDMATRIXVALUE_H_

#include "..\common.h"
#include "MatrixValue.h"

class CachedMatrixValue
{
public:
	//un constructeur créant des matrices aléatoirement
	CachedMatrixValue(bool random = false);
	//un constructeur prenant un tableau en entrée
	CachedMatrixValue(const double matrix[N][N]);
	//une méthode d'accés
	double get(int i, int j) const;
	void set(int i, int j, double value);
	bool isCached(int i, int j) const;

private:
	MatrixValue _matrixValue;
	bool _cachedCoefs[N][N];

};

#endif