#ifndef NODE_H_
#define NODE_H_

#include "..\common.h"
#include "RefCountBase.h"

#ifdef REFCOUNT
class Node : public RefCountBase
#else
class Node
#endif
{
public:
	//Node();
	//destructeur virtuel de Node, pour que la fonction "delete" aille chercher le destructeur qui convient
	virtual ~Node();
	//m�thode virtuelle d'acc�s � l'�l�ment a_ij
	virtual double get(int i, int j) const = 0;
	//m�thode de clonage
	virtual Node* clone() const=0;
};

#endif