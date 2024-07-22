#include <iostream>

// Function Template to find the maximum of two values
template <typename T>
T max(T a, T b);

// Class Template for a pair of values
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s);
    T1 getFirst() const;
    T2 getSecond() const;
};

int main() {
    // Using the function template
    int a = 10, b = 20;
    std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;

    double x = 3.14, y = 2.71;
    std::cout << "Max of " << x << " and " << y << " is " << max(x, y) << std::endl;

    // Using the class template
    Pair<int, double> p(1, 3.14);
    std::cout << "First: " << p.getFirst() << ", Second: " << p.getSecond() << std::endl;

    return 0;
}

// Definition of the Function Template
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Definition of the Class Template
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

template <typename T1, typename T2>
T1 Pair<T1, T2>::getFirst() const {
    return first;
}

template <typename T1, typename T2>
T2 Pair<T1, T2>::getSecond() const {
    return second;
}
