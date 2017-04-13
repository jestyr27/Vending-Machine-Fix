#pragma once
#include "stdafx.h"
#include <string>
#include <ctime>
#include "LFSR.h"

class VendingItems {

public:
	int number;
	string name;
	double price;

	void VendingItems::itemCreate();
	void VendingItems::generateItems();
}

