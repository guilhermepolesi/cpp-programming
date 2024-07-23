#include <iostream>
#include <sstream>
#include <stdexcept>

#include "../headers/OrderStatus.hpp"

OrderStatus intToOrderStatus(const unsigned int value) {
    switch (value) {
        case 1:
            return OrderStatus::PENDING_PAYMENT;
            break;
        case 2:
            return OrderStatus::PROCESSING;
            break;
        case 3:
            return OrderStatus::SHIPPED;
            break;
        case 4:
            return OrderStatus::DELIVERED;
            break;
        default:
            throw std::invalid_argument("Invalid order status value");
    }
}

std::string printOrderStatus(const OrderStatus value) {
    
    switch (value) {
        case OrderStatus::PENDING_PAYMENT:
            return "Pending payment (1)";
        case OrderStatus::PROCESSING:
            return  "Processing (2)";
        case OrderStatus::SHIPPED:
            return "Shipped (3)";
        case OrderStatus::DELIVERED:
            return "Delivered (4)";
        default:
            throw std::invalid_argument("Invalid order status value");
    }
}
