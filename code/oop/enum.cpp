#include <iostream>
#include <stdexcept>

// Defining the enumeration with explicit integer values
enum class Priority {
    Low = 1,
    Medium = 2,
    High = 3,
    Critical = 4
};

// Function that receives a priority level and prints a message
void printPriority(Priority level);

// Function to convert an integer to a Priority enum
Priority intToPriority(int value);

int main() {
    // Calling by name
    Priority currentLevel = Priority::High;
    printPriority(currentLevel);

    // Calling by integer value
    int priorityValue = 2;
    try {
        Priority intLevel = intToPriority(priorityValue);
        printPriority(intLevel);
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}

void printPriority(Priority level) {
    switch (level) {
        case Priority::Low:
            std::cout << "Low Priority (1)" << std::endl;
            break;
        case Priority::Medium:
            std::cout << "Medium Priority (2)" << std::endl;
            break;
        case Priority::High:
            std::cout << "High Priority (3)" << std::endl;
            break;
        case Priority::Critical:
            std::cout << "Critical Priority (4)" << std::endl;
            break;
        default:
            std::cout << "Unknown Priority" << std::endl;
    }
}

Priority intToPriority(int value) {
    switch (value) {
        case 1: return Priority::Low;
        case 2: return Priority::Medium;
        case 3: return Priority::High;
        case 4: return Priority::Critical;
        default: throw std::invalid_argument("Invalid priority value");
    }
}

