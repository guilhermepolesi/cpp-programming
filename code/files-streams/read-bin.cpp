#include <iostream>
#include <fstream>

int main() {
    try {
        std::ifstream inf("example_binary.dat", std::ios::in | std::ios::binary);
        
        if (!inf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }
        
        std::cout << "File opened successfully in binary mode!" << std::endl;
        
        int number;
        double pi;
        
        inf.read(reinterpret_cast<char*>(&number), sizeof(number));
        inf.read(reinterpret_cast<char*>(&pi), sizeof(pi));

        std::cout << "Number: " << number << std::endl;
        std::cout << "Pi: " << pi << std::endl;

        inf.close();
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "Exception opening/reading/closing the file: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred!" << std::endl;
    }

    return 0;
}

