#include "ChangeHourlyTransaction.h"
#include "WeeklySchedule.h"
#include "HourlyClassification.h"

ChangeHourlyTransaction::~ChangeHourlyTransaction(){

}

ChangeHourlyTransaction::ChangeHourlyTransaction(int empid, double hourlyRate)
: ChangeClassificationTransaction(empid)
, itsHourlyRate(hourlyRate) {

}

PaymentSchedule* ChangeHourlyTransaction::GetClassification() const {
	return new HourlyClassification(itsHourlyRate);
}