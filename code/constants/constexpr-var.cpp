#include <iostream>

constexpr int maxValue = 100;  // `constexpr` variable, value known at compile-time

int main() {
    std::cout << "Max value: " << maxValue << std::endl;

    // The following lines show what you can and cannot do with a `constexpr` variable:

    // Allowed operations:
    // You can use `maxValue` in constant expressions, such as array sizes or template arguments.
    int arr[maxValue];  // This is allowed because `maxValue` is a compile-time constant.

    // Disallowed operations:
    // You cannot modify a `constexpr` variable after initialization.
    // maxValue = 200;  // Error: cannot assign to a variable that is `constexpr`

    return 0;
}
