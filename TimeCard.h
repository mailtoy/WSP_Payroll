#ifndef TIMECARD_H
#define TIMECARD_H

class TimeCard
{
public:
	// TimeCard();
	virtual ~TimeCard();
	TimeCard(long date, double hours);
	long GetDate() {return itsDate;}
	double GetHours() {return itsHours;}
private:
	long itsDate;
	double itsHours;
};
#endif