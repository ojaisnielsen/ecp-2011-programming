#include "CachedNode.h"

CachedNode::CachedNode(Node *node) : _node(node)
{
}

CachedNode::CachedNode(Node *node, const CachedMatrixValue &cachedMatrixValue) : _node(node), _cachedMatrixValue(cachedMatrixValue)
{
}

CachedNode::~CachedNode()
{
	delete _node;
}

double CachedNode::get(int i, int j) const
{
	if (!_cachedMatrixValue.isCached(i, j))
	{
		_cachedMatrixValue.set(i, j, _node->get(i, j));
	}
	return _cachedMatrixValue.get(i, j);
}

CachedNode *CachedNode::clone() const
{
	return new CachedNode(_node->clone(), _cachedMatrixValue);
}