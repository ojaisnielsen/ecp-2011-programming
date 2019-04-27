#include "BinaryNode.h"

//Mieux vaut s'assurer que les pointeurs valent bien NULL si le BinaryNode est mal initialisé
BinaryNode::BinaryNode() : _node1P(NULL), _node2P(NULL)
{
}

//initialisation des noeuds
BinaryNode::BinaryNode(Node* node1P, Node* node2P) : _node1P(node1P), _node2P(node2P)
{
}

//destructeur : on a pris possession des noeuds
BinaryNode::~BinaryNode(void)
{
#ifdef REFCOUNT
	_node1P->Release();
	_node2P->Release();
#else
	delete _node1P;
	delete _node2P;
#endif
}

