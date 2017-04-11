#include "Stdafx.h"
#include "VendingSlot.h"

VendingSlot::VendingSlot() {

	int slotNumber = NULL;
	double slotPrice = NULL;
	int slotQuantity = NULL;
	int slotItem = NULL;
}

void VendingSlot::setSlotNumber(int input) {
	VendingSlot::slotNumber = input;
}

int VendingSlot::getSlotNumber(void) const
{
	return VendingSlot::slotNumber;
}

void VendingSlot::setSlotItem(int input) {
	VendingSlot::slotItem = input;
}

int VendingSlot::getSlotItem(void) const
{
	return VendingSlot::slotItem;
}

void VendingSlot::setSlotPrice(double input) {
	VendingSlot::slotPrice = input;
}

double VendingSlot::getSlotPrice(void) const
{
	return VendingSlot::slotPrice;
}

void VendingSlot::setSlotQuantity(int input) {
	VendingSlot::slotQuantity = input;
}

int VendingSlot::getSlotQuantity(void) const
{
	return VendingSlot::slotQuantity;
}
