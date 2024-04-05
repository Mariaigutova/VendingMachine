#ifndef SNACKSLOT_H
#define SNACKSLOT_H
#include <iostream>
#include "Snack.h"

using namespace std;

class SnackSlot : public Snack {
	int snackSlotSlot; 
	int snackSlotQuantity;
public:
	SnackSlot() {
		snackSlotSlot = 10;
		snackSlotQuantity = 5;
	}
	SnackSlot(string name, int calorific, int cost, int slot, int quantity) : Snack(name, calorific, cost) {
		this->snackSlotSlot = snackSlotSlot;
		this->snackSlotQuantity = snackSlotQuantity;
	}

	SnackSlot& operator++();
	SnackSlot& operator--();

	SnackSlot operator++(int);
	SnackSlot operator--(int);

	friend ostream& operator<<(ostream& output, const SnackSlot& ss);


	int getSnackSlotSlot() const;
	void setSnackSlotSlot(int value);

	int getSnackSlotQuantity() const;
	void setSnackSlotQuantity(int value);

	void grade_for_laboratory_work(int value);
};

#endif

