#include <iostream>

using namespace std;

int main() {

    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 10) {
        cout << "The number is equal to 10" << endl;
    }
    else {
        cout << "The number is not equal to 10" << endl;
    }

    if (num != 0) {
        cout << "The number is not equal to 0" << endl;
    }

    cout << "Enter a number between 0 and 100: ";
    cin >> num;

    if (num >= 0 && num <= 100) {
        cout << "Both conditions are true, the number is: " << num << endl;
    }
    else if (num < -1000 || num > 1000) {
        cout << "At least one condition was true. The number is less than -1000 or greater than  1000. The number is: " << num << endl;
    }
    else {
        cout << "No relational conditions passed. The number is: " << num << endl;
    }

    num = 0;
    if (!num) { // The condition is testing if the variable is not true, it will enter the if block. 0 equals false and anything other than 0 is true.
        cout << "Condition accepted, num is not true because it is equal to zero" << endl;
    }

    return 0;

}
