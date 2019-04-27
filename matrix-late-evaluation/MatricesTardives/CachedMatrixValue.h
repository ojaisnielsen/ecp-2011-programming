#ifndef CACHEDMATRIXVALUE_H_
#define CACHEDMATRIXVALUE_H_

#include "..\common.h"
#include "MatrixValue.h"

class CachedMatrixValue
{
public:
	//un constructeur cr�ant des matrices al�atoirement
	CachedMatrixValue(bool random = false);
	//un constructeur prenant un tableau en entr�e
	CachedMatrixValue(const double matrix[N][N]);
	//une m�thode d'acc�s
	double get(int i, int j) const;
	void set(int i, int j, double value);
	bool isCached(int i, int j) const;

private:
	MatrixValue _matrixValue;
	bool _cachedCoefs[N][N];

};

#endif