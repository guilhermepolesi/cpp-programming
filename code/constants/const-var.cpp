#include <iostream>

int main() {
    const int maxValue = 100;  // `const` variable, value cannot be changed
    std::cout << "Max value: " << maxValue << std::endl;

    // maxValue = 200;  // Error: cannot assign to a variable that is const

    return 0;
}

