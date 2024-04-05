#include "SnackSlot.h"

#include <iostream>

using namespace std;


SnackSlot& SnackSlot::operator++() {
	snackSlotSlot++;
	return *this;
}

SnackSlot& SnackSlot::operator--() {
	snackSlotSlot--;
	return *this;
}

SnackSlot SnackSlot::operator++(int) {
	SnackSlot old(*this);
	++(*this);
	return old;
}

SnackSlot SnackSlot::operator--(int) {
	SnackSlot old(*this);
	--(*this);
	return old;
}

int SnackSlot::getSnackSlotSlot() const {
	return snackSlotSlot;
}

void SnackSlot::setSnackSlotSlot(int value) {
	snackSlotSlot = value;
}

int SnackSlot::getSnackSlotQuantity() const {
	return snackSlotQuantity;
}

void SnackSlot::setSnackSlotQuantity(int value) {
	snackSlotQuantity = value;
}



ostream& operator<<(ostream& output, const SnackSlot& ss) {
	output << "Slot:" << ss.snackSlotSlot << endl
		<< "Quantity:" << ss.snackSlotQuantity << endl;
	return output;
}

void SnackSlot::grade_for_laboratory_work(int value) {
	if (value < 10) {
		while (value < 10) {
			value++;
		}
	}
	cout << "Grade for laboratory work:" << value << endl;
	cout << "Please!" << endl;
}