#include <iostream>

// Define a variadic macro for logging messages
#define LOG_MESSAGE(...) \
    do { \
        std::cout << "Log: "; \
        print(__VA_ARGS__); \
    } while (0)

// Function to print variable arguments
template<typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << std::endl; // Fold expression to print all arguments
}

int main() {
    LOG_MESSAGE("Hello, ", "World!", " Number: ", 42);
    return 0;
}

