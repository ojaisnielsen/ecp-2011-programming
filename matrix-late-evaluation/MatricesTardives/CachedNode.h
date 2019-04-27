#ifndef CACHEDNODE_H_
#define CACHEDNODE_H_

#include "..\common.h"
#include "Node.h"
#include "CachedMatrixValue.h"

class CachedNode: public Node
{
public:
	CachedNode(Node *node);
	CachedNode(Node *node, const CachedMatrixValue &_cachedMatrixValue);
	~CachedNode();
	double get(int i, int j) const;
	CachedNode *clone() const;

protected:
	Node *_node;
	mutable CachedMatrixValue _cachedMatrixValue;
};

#endif