#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H
#include "SnackSlot.h"
#include <iostream>
using namespace std;

class VendingMachine : public SnackSlot {
	int slotCount;
	int kindsCount;
public:
	VendingMachine() {
		slotCount = 100;
		kindsCount = 10;
	}

	VendingMachine(string name, int calorific, int cost, int slot, int quantity, int slotCount, int kinds) : SnackSlot(name, calorific, cost, slot, quantity) {
		this->slotCount = slotCount;
		this->kindsCount = kindsCount;
	}
	VendingMachine& operator++();
	VendingMachine& operator--();

	VendingMachine operator++(int);
	VendingMachine operator--(int);

	friend ostream& operator<<(ostream& output, const VendingMachine& m);


	int getVendingMachineslotCount() const;
	void setVendingMachineslotCount(int value);

	int getVendingMachinekindsount() const;
	void setVendingMachinekindsCount(int value);
};

#endif