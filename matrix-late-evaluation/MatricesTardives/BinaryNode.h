#ifndef BINARYNODE_H_
#define BINARYNODE_H_

#include "..\common.h"
#include "Node.h"
#include <stdlib.h>


class BinaryNode : public Node
{
public:
	//un constructeur par défaut pour s'assurer que les pointeurs valent NULL en cas de mauvaise initialisation
	BinaryNode();
	//construction d'un noeud binaire à l'aide des 2 noeuds sous-jacents
	BinaryNode(Node* node1P, Node* node2P);
	//méthode virtuelle, à implémenter dans les classes filles
	virtual double get(int i, int j) const= 0;
	//méthode de clonage (implémentée dans les classes filles, étant donné que l'on doit recopier tous les types de noeuds différents)
	virtual BinaryNode* clone() const=0;
	//destructeur
	BinaryNode::~BinaryNode(void);

	protected:
	//garder les adresses des noeuds en mémoire
	Node* _node1P;
	Node* _node2P;
};

#endif