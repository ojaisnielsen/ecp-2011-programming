#include "MatrixValue.h"

//un constructeur prenant un tableau en entrée
MatrixValue::MatrixValue(const double matrix[N][N])
{
	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
			_matrix[i][j]=matrix[i][j];
}

//une méthode d'accés
double MatrixValue::get(int i, int j) const
{
	return _matrix[i][j];
}

//constructeur par défaut (matrice aléatoire)
MatrixValue::MatrixValue(bool random)
{
	if (random)
	{
		srand(unsigned int(time(NULL))); // initialisation de rand
		double span=10; //pour que les valeurs de la matrice soient des variables aléatoires uniforme sur [-span,span]

		for (int i=0; i<N; ++i)
			for (int j=0; j<N; ++j)
				_matrix[i][j]=	2*span*((double(rand())/RAND_MAX)-0.5);
	}
}
