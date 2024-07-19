#include <iostream>

using namespace std;

int sum(int a, int b);

double sum(double a, double b);

int main() {
    
    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Sum of 2.5 and 3.7: " << sum(2.5, 3.7) << endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}
