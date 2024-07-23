#include <iostream>
#include <sstream>

#include "../headers/Product.hpp"

Product::Product(std::string name, double price) : name(name), price(price) {}

Product::~Product() {};
        
std::string Product::getName() const {
    return name;
}

void Product::setName(const std::string& name) {
    this->name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(const double& price) {
    this->price = price;
}

std::string Product::printProduct() const {
    std::stringstream ss;
    ss << "Product: " << name << ", $" << price << std::endl;
    return ss.str();
}


