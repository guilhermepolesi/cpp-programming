#include <iostream>
#include <fstream>

int main() {
    try {
        std::ofstream outf("example_binary.dat", std::ios::out | std::ios::binary);
        
        if (!outf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }
        
        std::cout << "File opened successfully in binary mode!" << std::endl;

        int number = 12345;
        double pi = 3.141592653589793;
        
        outf.write(reinterpret_cast<char*>(&number), sizeof(number));
        outf.write(reinterpret_cast<char*>(&pi), sizeof(pi));

        outf.close();
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "Exception opening/writing/closing the file: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred!" << std::endl;
    }

    return 0;
}

