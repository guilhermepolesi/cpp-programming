#include <iostream>

using namespace std;

int main () {

    int num, turn_off = 0;

    do {
        
        cout << "Program started!" << endl;

        while (!turn_off) {
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
        
        turn_off = 1;
        
    } while (!turn_off);
    

    return 0;

}
