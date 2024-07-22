#include <iostream>
#include <forward_list>

int main() {
    // Creating a forward_list of integers
    std::forward_list<int> numbers;

    // Adding elements to the forward_list
    numbers.push_front(3);
    numbers.push_front(2);
    numbers.push_front(1);

    // Inserting an element after a specific position
    auto it = numbers.begin();
    numbers.insert_after(it, 0); // Insert 0 after the first element

    // Removing an element after a specific position
    it = numbers.begin();
    numbers.erase_after(it); // Remove the element after the first element

    // Iterating over the forward_list
    std::cout << "Forward_list elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

