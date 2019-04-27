#ifndef BINARYNODE_H_
#define BINARYNODE_H_

#include "..\common.h"
#include "Node.h"
#include <stdlib.h>


class BinaryNode : public Node
{
public:
	//un constructeur par d�faut pour s'assurer que les pointeurs valent NULL en cas de mauvaise initialisation
	BinaryNode();
	//construction d'un noeud binaire � l'aide des 2 noeuds sous-jacents
	BinaryNode(Node* node1P, Node* node2P);
	//m�thode virtuelle, � impl�menter dans les classes filles
	virtual double get(int i, int j) const= 0;
	//m�thode de clonage (impl�ment�e dans les classes filles, �tant donn� que l'on doit recopier tous les types de noeuds diff�rents)
	virtual BinaryNode* clone() const=0;
	//destructeur
	BinaryNode::~BinaryNode(void);

	protected:
	//garder les adresses des noeuds en m�moire
	Node* _node1P;
	Node* _node2P;
};

#endif