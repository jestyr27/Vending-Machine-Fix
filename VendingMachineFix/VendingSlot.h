#pragma once
#ifndef VENDINGSLOT_H
#define VENDINGSLOT_H

class VendingSlot
{
private:
	int slotNumber;
	double slotPrice;
	int slotQuantity;
	int slotItem;

public:
	VendingSlot(void);

	void setSlotNumber(int input);
	int getSlotNumber() const;

	void setSlotItem(int input);
	int getSlotItem() const;

	void setSlotPrice(double input);
	double getSlotPrice() const;

	void setSlotQuantity(int input);
	int getSlotQuantity() const;

};

#endif
