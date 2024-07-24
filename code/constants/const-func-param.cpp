#include <iostream>

void printValue(const int value) {  // `const` parameter, value cannot be modified inside the function
    // value = 12;  // Error: cannot assign to a variable that is const
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int x = 10;
    printValue(x);

    return 0;
}
