#include "Snack.h"

#include <iostream>

using namespace std;

Snack::Snack(string name, int calorific, int cost) {
	snackName = name;
	snackCalorific = calorific;
	snackCost = cost;
}

Snack::Snack(string name, int calorific) {
	snackName = name;
	snackCalorific = calorific;
}

Snack::Snack(string name) {
	snackName = name;
}

Snack::Snack(const Snack& other) {
	this->snackName = other.snackName;
	this->snackCalorific = other.snackCalorific;
	this->snackCost = other.snackCost;
}


string Snack::getSnackName() const {
	return snackName;
}

void Snack::setSnackName(string value) {
	snackName = value;
}

int Snack::getSnackCalorific() const {
	return snackCalorific;
}

void Snack::setSnackCalorific(int value) {
	snackCalorific = value;
}

int Snack::getSnackCost() const {
	return snackCost;
}

void Snack::setSnackCost(int value) {
	snackCost = value;
}

ostream& operator<<(ostream& output, const Snack& s) {
	output << "Name:" << s.snackName << endl
		<< "Calorific:" << s.snackCalorific << endl
		<< "Cost:" << s.snackCost << endl;
	return output;
}