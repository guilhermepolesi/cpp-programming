#include <iostream>
#include <deque>

int main() {
    // Creating a deque of integers
    std::deque<int> numbers;

    // Adding elements to the front and back of the deque
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_front(0);
    numbers.push_front(-1);

    // Accessing elements by index
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers.at(1) << std::endl;

    // Removing elements from the front and back
    numbers.pop_front(); // Remove the first element
    numbers.pop_back();  // Remove the last element

    // Iterating over the deque
    std::cout << "Deque elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

