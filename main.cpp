#include <iostream>
#include "InventoryItem.h"
#include "Person.h"
#include "Transaction.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	InventoryItem item(11194621, 199);
	item.displayItem();
	
	Person me("abe", "mused");
	me.showPerson();
	
	Transaction transaction(11194621, 199, "abe", "mused", 12345543);
	transaction.displayTransaction();
	 
	
	return 0;
}
