#include <iostream>
#include <list>

int main() {
    // Creating a list of integers
    std::list<int> numbers;

    // Adding elements to the list
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Inserting an element at the beginning
    numbers.push_front(0);

    // Removing an element from the list
    numbers.remove(2); // Remove the first occurrence of 2

    // Iterating over the list
    std::cout << "List elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

