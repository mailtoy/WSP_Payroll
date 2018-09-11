#ifndef DELETEEMPLOYEETRANSACTION_H
#define DELETEEMPLOYEETRANSACTION_H

#include "Transaction.h"

class DeleteEmployeeTransaction : public Transaction
{
public:
	// DeleteEmployeeTransaction();
	virtual ~DeleteEmployeeTransaction();
	DeleteEmployeeTransaction(int empid);
	virtual void Execute();
private:
	int itsEmpid;
	
};
#endif