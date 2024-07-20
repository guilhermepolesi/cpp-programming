#include <iostream>
#include <stdexcept>

class MyException : public std::exception {
public:
    MyException(const std::string& message);
    virtual const char* what() const noexcept override;

private:
    std::string message_;
};

MyException::MyException(const std::string& message) : message_(message) {}

const char* MyException::what() const noexcept {
    return message_.c_str();
}

void testFunction(bool triggerException);

int main() {
    try {
        std::cout << "Starting main function." << std::endl;
        testFunction(true);
        std::cout << "This line will not be executed." << std::endl;
    }
    catch (const MyException& e) {
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Caught standard exception: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Caught unknown exception." << std::endl;
    }

    return 0;
}

void testFunction(bool triggerException) {
    if (triggerException) {
        throw MyException("Something went wrong in testFunction!");
    }
    std::cout << "testFunction executed successfully." << std::endl;
}
