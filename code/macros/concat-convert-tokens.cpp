#include <iostream>

// Define a macro to concatenate tokens
#define CONCAT(a, b) a ## b

// Define a macro to stringify a token
#define STRINGIFY(x) #x

int main() {
    int CONCAT(my, Var) = 10; // Expands to `int myVar = 10;`
    std::cout << "Value of myVar: " << myVar << std::endl;

    std::cout << "Stringified token: " << STRINGIFY(Hello World) << std::endl; // Outputs: "Hello World"
    return 0;
}

