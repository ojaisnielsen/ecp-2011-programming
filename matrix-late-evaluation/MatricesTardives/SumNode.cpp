#include "SumNode.h"

//constructeur
SumNode::SumNode(Node* node1P, Node* node2P) : BinaryNode(node1P, node2P)
{
}

//get retourne la somme de 2 éléments
double SumNode::get(int i, int j) const
{
	return _node1P->get(i,j) + _node2P->get(i,j);
}
//clonage
SumNode* SumNode::clone() const 
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

	return new SumNode(node1, node2);
}