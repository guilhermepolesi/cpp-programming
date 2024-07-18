#include <iostream>

using namespace std;

int main() {

    int a, b, add, sub, mul;
    double div, mod;

    a = 10;
    b = 2;

    add = a + b;
    cout << "Addition: " << add  << endl;

    sub = a - b;
    cout << "Subtraction: " << sub <<  endl;

    mul = a * b;
    cout << "Multiplication: " << mul << endl;

    div = a / b;
    cout << "Division: " << div <<  endl;

    a = 5;
    mod = a % b;
    cout << "Remainder of division: " << mod << endl;

    
    return 0;

}
