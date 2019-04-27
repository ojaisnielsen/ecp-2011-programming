#include "CachedMatrixValue.h"

CachedMatrixValue::CachedMatrixValue(bool random) : _matrixValue(random)
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			_cachedCoefs[i][j] = false;
}

CachedMatrixValue::CachedMatrixValue(const double matrix[N][N]) : _matrixValue(matrix)
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			_cachedCoefs[i][j] = false;
}

double CachedMatrixValue::get(int i, int j) const
{
	return _matrixValue.get(i, j);
}

bool CachedMatrixValue::isCached(int i, int j) const
{
	return _cachedCoefs[i][j];
}

void CachedMatrixValue::set(int i, int j, double value)
{
	_cachedCoefs[i][j] = true;
	_matrixValue._matrix[i][j] = value;
}