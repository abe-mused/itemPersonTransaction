#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
using namespace std;

class InventoryItem
{
	private:
		int stockNumber;
		float price;
	public:
		InventoryItem(int , float );
		void displayItem();
};

#endif
