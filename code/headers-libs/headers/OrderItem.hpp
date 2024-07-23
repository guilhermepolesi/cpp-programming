#ifndef ORDER_ITEM_H
#define ORDER_ITEM_H

#include <iostream>

#include "Product.hpp"

class OrderItem {
    private:
        int quantity;
        double price;
        Product product;

    public:
        OrderItem(const int& quantity, const double& price, const Product& product);
        ~OrderItem();
        int getQuantity() const;
        void setQuantity(const int& quantity);
        double getPrice() const;
        void setPrice(const double& price);
        double subTotal() const;
        std::string printOrderItem() const;
};

#endif // ORDER_ITEM_H
