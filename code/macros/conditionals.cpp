#include <iostream>

// Define platform-specific code
#ifdef __linux__
    // Code specific to Linux
    #define PLATFORM "Linux"
#elif defined(_WIN32)
    // Code specific to Windows
    #define PLATFORM "Windows"
#else
    // Code for other platforms
    #define PLATFORM "Unknown Platform"
#endif

// Define architecture-specific code
#if defined(__x86_64__) || defined(_WIN64)
    // Code specific to 64-bit architecture
    #define ARCHITECTURE "64-bit"
#else
    // Code specific to 32-bit architecture
    #define ARCHITECTURE "32-bit"
#endif

// Check if CUSTOM_MACRO is not defined and define it if not
#ifndef CUSTOM_MACRO
    #define CUSTOM_MACRO "Default Value"
#endif

int main() {
    // Print platform, architecture, and custom macro information
    std::cout << "Platform: " << PLATFORM << std::endl;
    std::cout << "Architecture: " << ARCHITECTURE << std::endl;
    std::cout << "Custom Macro: " << CUSTOM_MACRO << std::endl;
    return 0;
}

