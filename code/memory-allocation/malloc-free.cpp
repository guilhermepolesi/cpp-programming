#include <iostream>
#include <string>
#include <cstdlib> // For malloc and free

// Struct definition
struct Client {
    int client_id;
    std::string name;
    int age;
};

int main() {
    Client *ptr = nullptr; // Initialize pointer to nullptr

    try {
        // Attempt to allocate memory using malloc
        ptr = static_cast<Client*>(malloc(sizeof(Client)));

        if (ptr == nullptr) {
            throw std::bad_alloc(); // Throw exception if malloc fails
        }

        // Assign values to the members of the struct
        ptr->client_id = 1;
        ptr->name = "John Doe";
        ptr->age = 30;

        // Output the values
        std::cout << "Client ID: " << ptr->client_id << std::endl;
        std::cout << "Name: " << ptr->name << std::endl;
        std::cout << "Age: " << ptr->age << std::endl;

        // Simulating an exception for demonstration (comment out if not needed)
        // throw std::bad_alloc();

        // Free allocated memory (if allocated successfully)
        if (ptr != nullptr) {
            free(ptr);
        }
    }
    catch (const std::bad_alloc &e) {
        std::cerr << "Error: Failed to allocate memory." << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}

