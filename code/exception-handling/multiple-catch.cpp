/* 
    The code will probably always return the division error because the data entries are being read before the function that is handling exceptions is called.
    It is only being used to show how to do multiple catch.
*/


#include <iostream>
#include <stdexcept>
#include <type_traits>

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
    catch (const std::invalid_argument& ex) {
        std::cerr << "Invalid argument exception caught: " << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cerr << "Standard exception caught: " << ex.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }
}

