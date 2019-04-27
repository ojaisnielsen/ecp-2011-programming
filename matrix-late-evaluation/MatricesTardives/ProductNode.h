#ifndef PRODUCTNODE_H_
#define PRODUCTNODE_H_

#include "..\common.h"
#include "BinaryNode.h"

class ProductNode: public BinaryNode
{
public:
	//constructeur
	ProductNode(Node* node1P, Node* node2P);
	//clonage
	ProductNode* clone() const;
	//get
	double get(int i, int j) const;
};


#endif