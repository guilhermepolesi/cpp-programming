#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
    private:
        std::string name;
        double price;

    public:
        Product(std::string name, double price);
        ~Product();
        std::string getName() const;
        void setName(const std::string& name);
        double getPrice() const;
        void setPrice(const double& price);
        std::string printProduct() const;
};

#endif // PRODUCT_H
