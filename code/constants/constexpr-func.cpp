#include <iostream>

constexpr int multiply(int a, int b) {  // `constexpr` function, can be evaluated at compile-time
    return a * b;  // Function body is allowed to contain `return` statement and perform compile-time calculations
}

int main() {
    constexpr int result = multiply(3, 4);  // `constexpr` variable, value known at compile-time
    std::cout << "3 multiplied by 4: " << result << std::endl;

    // The following lines show what you can and cannot do with a `constexpr` function and variable:

    // Allowed operations with `constexpr` function:
    // You can call `constexpr` functions with constant expressions and use their results in compile-time contexts.
    // The function `multiply(3, 4)` is evaluated at compile-time, so `result` is a constant expression.

    // Disallowed operations with `constexpr` function:
    // You cannot modify the result of a `constexpr` function call because `result` is a `constexpr` variable.
    // result = multiply(5, 6);  // Error: cannot assign to `result` because it is `constexpr`

    // Disallowed operations with `constexpr` function:
    // You cannot have a `constexpr` function perform actions that cannot be evaluated at compile-time, such as dynamic memory allocation.
    // constexpr int foo(int n) { return new int[n]; }  // Error: dynamic memory allocation is not allowed in `constexpr` functions

    return 0;
}
