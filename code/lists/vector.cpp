#include <iostream>
#include <vector>

int main() {
    // Creating a vector of integers
    std::vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Accessing elements by index
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers.at(1) << std::endl;

    // Inserting an element at a specific position
    numbers.insert(numbers.begin() + 1, 10); // Insert 10 at the second position

    // Removing an element from a specific position
    numbers.erase(numbers.begin() + 2); // Remove the third element

    // Iterating over the vector
    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

