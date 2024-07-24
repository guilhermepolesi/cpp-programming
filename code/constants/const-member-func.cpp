#include <iostream>

class MyClass {
public:
    MyClass(int val) : value(val) {}

    void printValue() const {  // `const` member function, cannot modify member variables
        // The following line is allowed, as it only reads the member variable:
        std::cout << "Value: " << value << std::endl;

        // The following lines would cause errors because you cannot modify member variables:
        // value = 100;  // Error: cannot assign to `value` because `printValue` is a `const` member function
        // value++;     // Error: cannot modify `value` because `printValue` is a `const` member function
    }

private:
    int value;
};

int main() {
    MyClass obj(42);
    obj.printValue();

    return 0;
}
