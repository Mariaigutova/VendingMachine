#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include "VendingMachine.h"

class Location : public VendingMachine {
private:
	int vendingmachineTowncode;
	int vendingmachineCount;
public:
	Location() {
		vendingmachineTowncode = 52;
		vendingmachineCount = 500;
	}
	Location(string name, int calorific, int cost, int slot, int quantity, int slotCount, int kinds, int vendingmachineTowncode, int vendingmachineCount) : VendingMachine(name, calorific, cost, slot, quantity, slotCount, kinds) {
		this->vendingmachineTowncode = vendingmachineTowncode;
		this->vendingmachineCount = vendingmachineCount;
	}

	int setvendingmachineTowncode(int vendingmachineTowncode) {
		this->vendingmachineTowncode = vendingmachineTowncode;
	}

	int getvendingmachineTowncodes() {
		return vendingmachineTowncode;
	}

	int setvendingmachineCount(int vendingmachineCount) {
		this->vendingmachineCount = vendingmachineCount;
	}

	int getvendingmachineCount() {
		return vendingmachineCount;
	}
};

#endif