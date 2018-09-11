#ifndef TIMECARDTRANSACTION_H
#define TIMECARDTRANSACTION_H

#include "Transaction.h"

class TimeCardTransaction : public Transaction
{
public:
	// TimeCardTransaction();
	virtual ~TimeCardTransaction();
	TimeCardTransaction(long date, double hours, int empid);

	virtual void Execute();
private:
	int itsEmpid;
	long itsDate;
	double itsHours;
};
#endif