#include "ValueNode.h"

//constructeur par d�faut
ValueNode::ValueNode(bool random) : MatrixValue(random)
{
}

//constructeur avec tableau de doubles
ValueNode::ValueNode(const double matrix[N][N]) : MatrixValue(matrix)
{
}

//destructeur
ValueNode::~ValueNode()
{
}

//M�thode get
double ValueNode::get(int i, int j) const 
{
	return MatrixValue::get(i, j);
}

ValueNode* ValueNode::clone() const
{
	double tableau[N][N];
	for (int i =0;i<N;++i)
		for (int j =0;j<N;++j)
			tableau[i][j] = get(i,j);
	return new ValueNode(tableau);
}