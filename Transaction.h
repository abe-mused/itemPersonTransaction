#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include "InventoryItem.h"
#include "Person.h"
using namespace std;

class Transaction
{
	private:
		int transactionNumber;
		InventoryItem item;
		Person seller;
	public:
		Transaction(int, float, string, string, int);
		void displayTransaction();
};

#endif
