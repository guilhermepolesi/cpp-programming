#include <iostream>
#include <fstream>
#include <string>
#include <memory>   // For std::unique_ptr

int main() {
    std::ifstream inf;

    try {
        inf.open("txt");

        if (!inf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }

        std::cout << "File opened successfully!" << std::endl;

        // Using std::unique_ptr to manage dynamically allocated memory for lines
        std::unique_ptr<std::string> line = std::make_unique<std::string>();

        // Reading and displaying each line from the file
        while (std::getline(inf, *line)) {
            std::cout << *line << std::endl;
        }

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

