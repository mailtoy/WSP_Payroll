#ifndef PAYROLLDATABASE_H
#define PAYROLLDATABASE_H

#include <map>

class Employee;

class PayrollDatabase
{
public:
	// PayrollDatabase();
	virtual ~PayrollDatabase();
	Employee* GetEmployee(int empId);
	void AddEmployee(int empid, Employee*);
	void clear() {itsEmployees.clear();}
private:
	std::map<int, Employee*> itsEmployees;
	
};

#endif