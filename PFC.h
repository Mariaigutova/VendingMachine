#ifndef PFC_H
#define PFC_H
#include <iostream>
#include "Snack.h"

using namespace std;

class PFC : public Snack {
private:
	int snackProteins;
	int snackFats;
	int snackCarbohydrates;
public:
	PFC() {
		snackProteins = 4;
		snackFats = 17;
		snackCarbohydrates = 72;
	}
	PFC(string name, int calorific, int cost, int proteins, int fans, int carbohydrates) 
		: Snack(name, calorific, cost) {
		this->snackProteins = snackProteins;
		this->snackFats = snackFats;
		this->snackCarbohydrates = snackCarbohydrates;
	 }

	int setSnackProteins(int snackProteins) {
		this->snackProteins = snackProteins;
	}

	int getSnackProteins() {
		return snackProteins;
	}

	int setSnackFats(int snackFats) {
		this->snackFats = snackFats;
	}

	int getSnackFats() {
		return snackFats;
	}

	int setSnackCarbohydrates(int snackCarbohydrates) {
		this->snackCarbohydrates = snackCarbohydrates;
	}

	int getSnackCarbohydrates() {
		return snackCarbohydrates;
	}
};

#endif