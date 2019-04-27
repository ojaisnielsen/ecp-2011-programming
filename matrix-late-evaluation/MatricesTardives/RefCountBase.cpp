#include "RefCountBase.h"

RefCountBase::RefCountBase() : _counter(0)
{
}

RefCountBase::RefCountBase(const RefCountBase &refCountBase) : _counter(0)
{
}

RefCountBase::~RefCountBase()
{
}

void RefCountBase::AddRef()
{
	++_counter;
}

void RefCountBase::Release()
{
	if (_counter == 0) delete this;
	else --_counter;
}