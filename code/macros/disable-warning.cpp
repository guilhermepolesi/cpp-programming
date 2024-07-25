#include <iostream>

// #pragma GCC diagnostic push: Saves the current state of diagnostics settings.
// This is useful if you want to disable specific warnings for a portion of code and then restore the original settings.

#pragma GCC diagnostic push

// #pragma GCC diagnostic ignored "-Wunused-variable": Disables the warning for unused variables.
// This specific warning is about variables that are declared but not used.

#pragma GCC diagnostic ignored "-Wunused-variable"

int main() {
    int unusedVariable; // This would normally generate a warning about an unused variable.

    std::cout << "This code compiles without warnings about unused variables." << std::endl;

    // #pragma GCC diagnostic pop: Restores the previous state of diagnostics settings.
    // After this point, the compiler will again generate warnings for unused variables.

    #pragma GCC diagnostic pop

    int anotherUnusedVariable; // This will generate a warning about an unused variable.
    
    // If the warning does not appear, it may be necessary to compile with all warning files.
    // Run the command: g++ -Wall -Wextra -o warning-test disable-warning.cpp 
    
    return 0;
}

