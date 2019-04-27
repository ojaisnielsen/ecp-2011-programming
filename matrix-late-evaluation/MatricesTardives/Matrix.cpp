#include "Matrix.h"


//un constructeur prenant un tableau en entrée
Matrix::Matrix(const double matrix[N][N])
{
	_node = new ValueNode(matrix);
}

//un constructeur donnant une matrice aléatoire
Matrix::Matrix(bool random)
{
	_node = new ValueNode(random);
}

//un constructeur prenant un noeud
Matrix::Matrix(Node* node)
{
	_node=node;
}

//constructeur de copie
Matrix::Matrix(const Matrix &m)
{
	_node = m._node->clone();
}

//un destructeur
Matrix::~Matrix()
{
#ifdef REFCOUNT
	_node->Release();
#else
	delete _node;
#endif
}

//accesseur
double Matrix::get(const int &i,const int &j) const
{
	return _node->get(i,j);
}


//multiplication matricielle
Matrix operator*(const Matrix &m1, const Matrix &m2)
{
	Node *node1, *node2;
#ifdef REFCOUNT
	m1._node->AddRef();
	m2._node->AddRef();
	node1 = m1._node;
	node2 = m2._node;
#else
	node1 = m1._node->clone();
	node2 = m2._node->clone();
#endif

#ifdef CACHE
	return Matrix(new CachedNode(new ProductNode(node1, node2)));
#else
	return Matrix(new ProductNode(node1, node2));
#endif
}


//addition de matrices
//multiplication matricielle
Matrix operator+(const Matrix &m1, const Matrix &m2)
{
	Node *node1, *node2;
#ifdef REFCOUNT
	m1._node->AddRef();
	m2._node->AddRef();
	node1 = m1._node;
	node2 = m2._node;
#else
	node1 = m1._node->clone();
	node2 = m2._node->clone();
#endif

#ifdef CACHE
	return Matrix(new CachedNode(new SumNode(node1, node2)));
#else
	return Matrix(new SumNode(node1, node2));
#endif
}


