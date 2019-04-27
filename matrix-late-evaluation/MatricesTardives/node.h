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
	//méthode virtuelle d'accés à l'élément a_ij
	virtual double get(int i, int j) const = 0;
	//méthode de clonage
	virtual Node* clone() const=0;
};

#endif