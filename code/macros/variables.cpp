#include <iostream>

// Define string macros
#define COMPANY_NAME "Red Hat"
#define PRODUCT_NAME "RHEL"

// Define integer macros
#define MAX_USERS 100
#define DEFAULT_PORT 8080

// Function to display configuration settings
void display_settings() {
    std::cout << "Company: " << COMPANY_NAME << std::endl;
    std::cout << "Product: " << PRODUCT_NAME << std::endl;
    std::cout << "Maximum Users: " << MAX_USERS << std::endl;
    std::cout << "Default Port: " << DEFAULT_PORT << std::endl;
}

int main() {
    // Display configuration settings
    display_settings();
    return 0;
}

