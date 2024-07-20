#include <iostream>
#include <fstream>
#include <string>

int main() {
    try {
        std::ifstream inf("txt");
        
        if (!inf.is_open()) {
            throw std::ios_base::failure("Failed to open the file for reading!");
        }
        
        std::cout << "File opened successfully for reading!" << std::endl;

        std::string line;
        while (std::getline(inf, line)) {
            std::cout << line << std::endl;
        }
        
        inf.close();
        
        std::ofstream outf("txt", std::ios::app);
        
        if (!outf.is_open()) {
            throw std::ios_base::failure("Failed to open the file for writing!");
        }
        
        std::cout << "File opened successfully for writing!" << std::endl;
        
        outf << "Appending a new line to the file." << std::endl;
        outf << "This is an additional example line." << std::endl;
        
        outf.close();
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "Exception opening/reading/writing/closing the file: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred!" << std::endl;
    }

    return 0;
}

