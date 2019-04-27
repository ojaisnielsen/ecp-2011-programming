#include "Matrix.h"


//un constructeur prenant un tableau en entrée
Matrix::Matrix(const double matrix[N][N])
{
	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
			_matrix[i][j]=matrix[i][j];
}

//une méthode d'accés
double Matrix::get(int i, int j) const
{
	return _matrix[i][j];
}

//multiplication matricielle
Matrix operator*(const Matrix &m1, const Matrix &m2)
{
	double product[N][N];

	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
		{
			product[i][j]=0;
			for (int k =0;k<N;++k)
			{
				product[i][j]+=m1._matrix[i][k]*m2._matrix[k][j];
			}
		}

	return Matrix(product);
}


//addition de matrices
Matrix operator+(const Matrix &m1, const Matrix &m2)
{
	double sum[N][N];

	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
			sum[i][j]=m1._matrix[i][j]+m2._matrix[i][j];

	return Matrix(sum);
}

//constructeur de copie
Matrix::Matrix(const Matrix &m)
{

	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
			_matrix[i][j]=m._matrix[i][j];
}


//constructeur par défaut (matrice aléatoire)
Matrix::Matrix(bool random)
{
	if (random)
	{
		srand(time(NULL)); // initialisation de rand
		double span=10; //pour que les valeurs de la matrice soient des variables aléatoires uniforme sur [-span,span]

		for (int i=0; i<N; ++i)
			for (int j=0; j<N; ++j)
				_matrix[i][j]=	2*span*((double(rand())/RAND_MAX)-0.5);
	}
}