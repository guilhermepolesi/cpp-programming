#include <iostream>
#include <sstream>

#include "../headers/OrderItem.hpp"

OrderItem::OrderItem(const int& quantity, const double& price, const Product& product) : quantity(quantity), price(price), product(product) {}

OrderItem::~OrderItem() {}

int OrderItem::getQuantity() const {
    return quantity;
}

void OrderItem::setQuantity(const int& quantity) {
    this->quantity = quantity;
}

double OrderItem::getPrice() const {
    return price;
}

void OrderItem::setPrice(const double& price) {
    this->price = price;
}

double OrderItem::subTotal() const {
    return quantity * price;
}

std::string OrderItem::printOrderItem() const {
    std::stringstream ss;
    ss << product.printProduct();
    ss << "Quantity: " << quantity << "\nSubtotal: $" << subTotal() << std::endl;
    return ss.str();
}
