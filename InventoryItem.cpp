#include "InventoryItem.h"
#include <iostream>
using namespace std;

InventoryItem::InventoryItem(int stockNum, float pr){
	stockNumber = stockNum;
	price = pr;
}

void InventoryItem::displayItem(){
	cout<<"item "<<stockNumber<<" costs $"<<price<<endl;
}
