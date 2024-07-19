#include <iostream>
#include <stdexcept>

void division(int numerator, int denominator);

int main() {
    
    int num = 0, den = 0;
    std::cout << "Enter the numerator: ";
    std::cin >> num;
    std::cout << "Enter the denominator: ";
    std::cin >> den;
    
    division(num, den);

    return 0;
}

void division(int numerator, int denominator) {
    try {
       
        if (denominator == 0) {
            throw std::runtime_error("Division by zero error");
        }
        
        double result = static_cast<double>(numerator) / denominator;
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const std::runtime_error& ex) {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }
}
