#include <iostream>

class MyClass {
public:
    constexpr MyClass(int val) : value(val) {}  // `constexpr` constructor, can be evaluated at compile-time

    constexpr int getValue() const {  // `constexpr` member function, can be evaluated at compile-time
        return value;  // Return the value, which is allowed in a `constexpr` member function
    }

private:
    int value;
};

int main() {
    constexpr MyClass obj(42);  // `constexpr` object, value known at compile-time
    constexpr int result = obj.getValue();  // `constexpr` variable, value known at compile-time
    std::cout << "Value from object: " << result << std::endl;

    // The following lines show what you can and cannot do with `constexpr` member functions and objects:

    // Allowed operations with `constexpr` member functions and objects:
    // You can use `constexpr` member functions to access and operate on `constexpr` objects.
    // `obj.getValue()` is evaluated at compile-time, so `result` is a compile-time constant.

    // Disallowed operations with `constexpr` member functions and objects:
    // You cannot modify `constexpr` member variables or objects after they are initialized.
    // obj = MyClass(100);  // Error: cannot assign to `obj` because it is a `constexpr` object

    // You cannot perform operations that require runtime evaluation inside a `constexpr` member function.
    // constexpr void modifyValue(MyClass& obj) { obj.value = 100; }  // Error: modifying member variables is not allowed

    return 0;
}
