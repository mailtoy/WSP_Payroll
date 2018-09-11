#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
public:
	// Transaction();
	virtual ~Transaction();
	virtual void Execute() = 0;
	
};

#endif