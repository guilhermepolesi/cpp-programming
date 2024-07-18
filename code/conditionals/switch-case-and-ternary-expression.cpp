#include <iostream> 
#include <string>

using namespace std;

int main () {

    int day;

    cout << "Enter the number for the day of the week, where 1 is equal to monday and 7 is equal to sunday" << endl;
    cin >> day;

    switch (day) {
        case 1:
            cout << "monday" << endl;
            break;
        case 2:
            cout << "tuesday" << endl;
            break;
        case 3:
            cout << "wednesday" << endl;
            break;
        case 4:
            cout << "thursday" << endl;
            break;
        case 5:
            cout << "friday" << endl;
            break;
        case 6:
            cout << "saturday" << endl;
            break;
        case 7:
            cout << "sunday" << endl;
            break;
        default:
            cout << "The number entered is less than 1 or greater than 7" << endl;
            break;
    }

    int age = 0;

    cout << "Enter your age: ";
    cin >> age;
    
    string msg = (age >= 18) ? "You are of legal age" : "You are underage";
    cout << msg << endl;

    return 0;

}
