#ifndef REFCOUNTBASE_H_
#define REFCOUNTBASE_H_

#include "..\common.h"

class RefCountBase
{
public:
	RefCountBase();
	RefCountBase(const RefCountBase &refCountBase);
	virtual ~RefCountBase();
	void AddRef();
	void Release();

protected:
	size_t _counter;
};


#endif