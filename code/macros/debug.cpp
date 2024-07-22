#include <iostream>

// Define a macro for debugging
#define DEBUG_MODE

#ifdef DEBUG_MODE
    #define DEBUG_PRINT(msg) std::cout << "DEBUG: " << msg << std::endl
#else
    #define DEBUG_PRINT(msg) // No operation
#endif

int main() {
    DEBUG_PRINT("This is a debug message.");
    return 0;
}

