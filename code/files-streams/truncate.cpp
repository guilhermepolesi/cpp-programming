#include <iostream>
#include <fstream>

int main() {
    try {
        std::ofstream outf("txt", std::ios::out | std::ios::trunc);
        
        if (!outf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }
        
        std::cout << "File opened successfully and truncated!" << std::endl;

        outf << "This is a new line after truncating the file." << std::endl;
        outf << "All previous content has been removed." << std::endl;

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

