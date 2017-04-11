// Vending Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "VendingSlot.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Variables
	const int MAX_COLUMNS = 4;
	const int MAX_ROWS = 5;
	const int MAX_SLOTS = MAX_ROWS * MAX_COLUMNS;
	VendingSlot slot[MAX_SLOTS];

	char one = 'c';

	cout << one;

	//Set each slot number
	for (int i = 0; i < MAX_ROWS * MAX_COLUMNS; i++)
	{
		slot[i].setSlotNumber(i);

	}

	//Fill each slot with an item



	return 0;
}

