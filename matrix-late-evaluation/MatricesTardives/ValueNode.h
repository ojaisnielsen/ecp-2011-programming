#ifndef VALUENODE_H_
#define VALUENODE_H_

#include "..\common.h"
#include "Node.h"
#include "MatrixValue.h"

class ValueNode: public Node, public MatrixValue
{
public:
	//un constructeur créant des matrices aléatoirement
	ValueNode(bool random = false);
	//un constructeur prenant un tableau en entrée
	ValueNode(const double matrix[N][N]);

	~ValueNode();
	//méthode virtuelle d'accés à l'élément a_ij
	double get(int i, int j) const;
	//clonage
	ValueNode* clone() const;
};


#endif