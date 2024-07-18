#include <iostream>

using namespace std;

int main() {

    int num, i = 0;

    while (i < 10) {
        cout << "Enter a number: ";
        cin >> num;
        i++;
    }

    while (1) {
        cout << endl;
        cout << "Menu" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Hamburger" << endl;
        cout << "3. Soda" << endl;
        cout << "4. Finish" << endl;

        cout << "Enter the number: ";
        cin >> num;

        if (num < 1 || num > 4) {
           cout << "Error! Type it again." << endl;
        }
        
        if (num == 4) {
           break;
        } 

    }
    return 0;

}
