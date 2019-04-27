#include "ProductNode.h"

//constructeur
ProductNode::ProductNode(Node* node1P, Node* node2P) : BinaryNode(node1P, node2P)
{
}

//get retourne le produit matricielle pour un élément
double ProductNode::get(int i, int j) const
{
	double value=0;
	for (int k =0;k<N;++k)
		value+=_node1P->get(i,k)*_node2P->get(k,j);
	return value;
}

//clonage
ProductNode* ProductNode::clone() const 
{
	Node *node1, *node2;

#ifdef REFCOUNT
	_node1P->AddRef();
	_node2P->AddRef();
	node1 = _node1P;
	node2 = _node2P;
#else
	node1 = _node1P->clone();
	node2 = _node2P->clone();
#endif

	return new ProductNode(node1, node2);
}