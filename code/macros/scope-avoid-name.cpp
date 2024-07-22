#include <iostream>

// Define a macro inside another macro to avoid name clashes
#define MY_MACRO(name) \
    do { \
        std::cout << "Inside MY_MACRO: " << name << std::endl; \
    } while (0)

int main() {
    MY_MACRO("Test"); // Calls the macro with the argument "Test"
    return 0;
}

