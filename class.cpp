#include "PFC.h"
#include "Location.h"
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include <iostream>
using namespace std;

int main() {
    Snack s;
    SnackSlot ss;
    VendingMachine m;
    cout << s << endl;
    cout << m;
    int grade_for_laboratory;
    cout << "Grade: ";
    cin >> grade_for_laboratory;
    ss.grade_for_laboratory_work(grade_for_laboratory);
    return 0;
    
}
