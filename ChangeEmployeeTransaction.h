#ifndef CHARGEEMPLOYEETRANSACTION_H
#define CHARGEEMPLOYEETRANSACTION_H

#include "Transaction.h"
#include "Employee.h"

class ChangeEmployeeTransaction : public Transaction
{
public:
	ChangeEmployeeTransaction(int empid);
	virtual ~ChangeEmployeeTransaction();
	virtual void Execute();
	virtual void Change(Employee&) = 0;

private:
	int itsEmpId;
};

#endif