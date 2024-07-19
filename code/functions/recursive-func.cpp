#include <iostream>

using namespace std;

unsigned long long factorial(unsigned int n);

int main() {
    unsigned int number = 5;
    unsigned long long result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;
    return 0;
}

unsigned long long factorial(unsigned int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
