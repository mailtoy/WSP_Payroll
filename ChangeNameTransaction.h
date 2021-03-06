#ifndef CHARGENAMETRANSACTION_H
#define CHARGENAMETRANSACTION_H

#include "ChangeEmployeeTransaction.h"
#include <string>

class ChangeNameTransaction : public ChangeEmployeeTransaction
{
public:
	virtual ~ChangeNameTransaction();
	ChangeNameTransaction(int empid, string name);
	virtual void Change(Employee&);

private:
	string itsName;
	
};
#endif