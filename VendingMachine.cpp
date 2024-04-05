#include "VendingMachine.h"

#include <iostream>

using namespace std;


VendingMachine& VendingMachine::operator++() {
	slotCount++;
	return *this;
}

VendingMachine& VendingMachine::operator--() {
	slotCount--;
	return *this;
}

VendingMachine VendingMachine::operator++(int) {
	VendingMachine old(*this);
	++(*this);
	return old;
}

VendingMachine VendingMachine::operator--(int) {
	VendingMachine old(*this);
	--(*this);
	return old;
}

int VendingMachine::getVendingMachineslotCount() const {
	return slotCount;
}

void VendingMachine::setVendingMachineslotCount(int value) {
	slotCount = value;
}

int VendingMachine::getVendingMachinekindsount() const {
	return kindsCount;
}

void VendingMachine::setVendingMachinekindsCount(int value) {
	kindsCount = value;
}

ostream& operator<<(ostream& output, const VendingMachine& m) {
	output << "slotCount:" << m.slotCount << endl
		 << "kindsCount:" << m.kindsCount << endl;
	return output;
}