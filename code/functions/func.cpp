#include <iostream>
#include <string>
using namespace std;

void print_hello();

int sum(int a, int b);

void mul_table(int num);

int main() {

    print_hello();
    cout << sum(10,10) << endl;
    
    int num = 0;
    cout << "What number do you want to know the multiplication table? ";
    cin >> num;
    mul_table(num);

    return 0;
}

void print_hello() {
    cout << "Hello world!" << endl;
}

int sum(int a, int b) {
    return a + b;
}

void mul_table(int num) {
    cout << "Multiplication table for " << num << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
