#include "Transaction.h"
#include <iostream>
#include "InventoryItem.h"
#include "Person.h"
using namespace std;

//initialization list
Transaction::Transaction(int sn, float pr, string fn, string ln, int transactionNum):item(sn, pr),seller(fn, ln)
{
	transactionNumber = transactionNum;
}
void Transaction::displayTransaction(){
	cout<<"data for transaction #"<<transactionNumber<<endl;
	item.displayItem();
	seller.showPerson();
	
}
