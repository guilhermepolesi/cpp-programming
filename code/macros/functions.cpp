#include <iostream>

// Define macros as inline functions
#define SQUARE(x) ((x) * (x))
#define ADD(a, b) ((a) + (b))

// Define a macro to find the maximum of two values using a ternary operator
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Function to demonstrate macro usage
void demonstrate_macros() {
    int num = 5;
    int result = SQUARE(num); // Use macro to square the number
    std::cout << "The square of " << num << " is " << result << std::endl;

    int x = 10, y = 20;
    int sum = ADD(x, y); // Use macro to add two numbers
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;

    // Use the MAX macro with a ternary operator to find the maximum of two values
    int a = 15, b = 25;
    int maximum = MAX(a, b); // Use macro to find the maximum
    std::cout << "The maximum of " << a << " and " << b << " is " << maximum << std::endl;
}

int main() {
    // Demonstrate macro usage
    demonstrate_macros();
    return 0;
}

