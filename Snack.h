#ifndef SNACK_H
#define SNACK_H
#include <iostream>

using namespace std;

class Snack {
	string snackName;
	int snackCalorific;
	int snackCost;
public:
	Snack(string name, int calorific, int cost);
	Snack(string name, int calorific);
	Snack(string name);
	Snack(const Snack& other);

	~Snack() = default;
	
	friend ostream& operator<<(ostream& output, const Snack& s);

	string getSnackName() const;
	void setSnackName(string value);

	int getSnackCalorific() const;
	void setSnackCalorific(int value);

	int getSnackCost() const;
	void setSnackCost(int value);
	
	Snack() {
		snackName = string("MilkyWay");
		snackCalorific = 450;
		snackCost = 100;
	}
};

#endif 