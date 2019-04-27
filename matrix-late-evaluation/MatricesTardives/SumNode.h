#ifndef SUMNODE_H_
#define SUMNODE_H_

#include "..\common.h"
#include "BinaryNode.h"

class SumNode: public BinaryNode
{
public:
	//constructeur
	SumNode::SumNode(Node* node1P, Node* node2P);
	//clonage
	SumNode* clone() const;
	//get
	double get(int i, int j) const;
};

#endif