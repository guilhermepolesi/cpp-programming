#include <iostream>
#include <fstream> 

int main() {
    std::ofstream outf;
    
    try {
        outf.open("txt");
        
        if (!outf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }
        
        std::cout << "File opened successfully!" << std::endl;
        
        
        outf << "Hello, world!" << std::endl;
        outf << "This is an example of file manipulation in C++." << std::endl;
        
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

