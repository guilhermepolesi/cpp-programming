#include <iostream>
#include <string>
#include <cstdlib> // For malloc and free

// Struct definition
struct Client {
    int client_id;
    std::string name;
    int age;
    Client* next; // Pointer to the next client in the list
};

// Function to insert a new client at the beginning of the list
void insertClient(Client*& head, int id, const std::string& name, int age) {
    // Allocate memory for the new client node
    Client* newNode = static_cast<Client*>(malloc(sizeof(Client)));

    if (newNode == nullptr) {
        throw std::bad_alloc(); // Throw exception if malloc fails
    }

    // Initialize the new client node
    newNode->client_id = id;
    newNode->name = name;
    newNode->age = age;
    newNode->next = head; // Point new node to current head

    // Update head to point to the new node
    head = newNode;
}

// Function to print all clients in the list
void printClients(const Client* head) {
    const Client* current = head;

    while (current != nullptr) {
        std::cout << "Client ID: " << current->client_id << ", Name: " << current->name << ", Age: " << current->age << std::endl;
        current = current->next;
    }
}

// Function to free all nodes in the list
void freeList(Client* head) {
    Client* current = head;
    Client* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        free(current); // Free memory allocated for current node
        current = next;
    }
}

int main() {
    Client* head = nullptr; // Initialize head pointer to nullptr

    try {
        // Inserting clients into the linked list
        insertClient(head, 3, "Tony Stark", 53);
        insertClient(head, 2, "Bruce Banner", 30);
        insertClient(head, 1, "Wade Wilson", 25);

        // Printing all clients in the list
        std::cout << "List of clients:" << std::endl;
        printClients(head);

        // Freeing allocated memory for the list
        freeList(head);
        head = nullptr; // Set head to nullptr after freeing
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Error: Failed to allocate memory." << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }

    return 0;
}

