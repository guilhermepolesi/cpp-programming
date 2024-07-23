#define TEST 0

#include <iostream>
#include<string>
#include <memory>

#include "headers/Product.hpp"
#include "headers/Client.hpp"
#include "headers/OrderItem.hpp"
#include "headers/OrderStatus.hpp"
#include "headers/Order.hpp"
#include "headers/DateTime.hpp"

int main() {

#   if TEST
    std::cout << "TEST MODE ENABLED" << std::endl;

    Product product1("Pc", 2500.00);
    Product product2("Memory DDR4", 100.00);
    std::shared_ptr<Client> client = std::make_shared<Client>("Vito Corleone", "don.corleone@gmail.com");
    std::shared_ptr<OrderItem> orderItem1 = std::make_shared<OrderItem>(1, product1.getPrice(), product1);
    std::shared_ptr<OrderItem> orderItem2 = std::make_shared<OrderItem>(2, product2.getPrice(), product2);
    OrderStatus orderStatus = intToOrderStatus(2);
    DateTime dateTime;
    std::shared_ptr<Order> order = std::make_shared<Order>(dateTime, orderStatus);
    order->setClient(client);
    order->addItem(orderItem1);
    order->addItem(orderItem2);

    std::cout << product1.printProduct()  << std::endl;

    std::cout << client->printClient() << std::endl;

    std::cout << orderItem1->printOrderItem() << std::endl;
    
    std::cout <<  printOrderStatus(orderStatus) << std::endl;
    
    std::cout << order->printOrder() << std::endl;
    
    std::cout << "END OF TEST" << std::endl;

#   else
    std::cout << "PROGRAM STARTED!" << std::endl;
    
    std::shared_ptr<Order> order;
    DateTime dateTime;

    std::cout << "Enter client data:" << std::endl;
    std::cout << "Name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    std::cout << "E-mail: ";
    std::string email;
    std::getline(std::cin >> std::ws, email);
    std::shared_ptr<Client> client = std::make_shared<Client>(name, email);
    

    std::cout << "Enter order data: " << std::endl;
    std::cout << "Status: ";
    int status;
    std::cin >> status;
    OrderStatus orderStatus = intToOrderStatus(status);
    order = std::make_shared<Order>(dateTime, orderStatus);
    order->setClient(client);
    order->setStatus(orderStatus);

    std::cout << "How many items to this order? ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter " << i + 1 << " item data: \n";
        std::cout << "Product name: ";
        std::string product_name;
        std::getline(std::cin >> std::ws, product_name);
        std::cout << "Product price: ";
        double price;
        std::cin >> price;
        std::cout << "Quantity: ";
        int quantity;
        std::cin >> quantity;
        
        Product product(product_name, price);
        std::shared_ptr<OrderItem> orderItem = std::make_shared<OrderItem>(2, product.getPrice(), product);
        order->addItem(orderItem);
    }
     
    order->setDateTime(dateTime.getTimestamp());

    std::cout << "\nORDER SUMMARY:" << std::endl;
    std::cout << order->printOrder();



    
    std::cout << "END OF PROGRAM" << std::endl;

#   endif

    return 0;
}
