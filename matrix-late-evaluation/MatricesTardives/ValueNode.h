#ifndef VALUENODE_H_
#define VALUENODE_H_

#include "..\common.h"
#include "Node.h"
#include "MatrixValue.h"

class ValueNode: public Node, public MatrixValue
{
public:
	//un constructeur cr�ant des matrices al�atoirement
	ValueNode(bool random = false);
	//un constructeur prenant un tableau en entr�e
	ValueNode(const double matrix[N][N]);

	~ValueNode();
	//m�thode virtuelle d'acc�s � l'�l�ment a_ij
	double get(int i, int j) const;
	//clonage
	ValueNode* clone() const;
};


#endif