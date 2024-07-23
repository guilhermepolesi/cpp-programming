#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <iomanip>

#include "../headers/Order.hpp"
#include "../headers/OrderStatus.hpp"

Order::Order(const DateTime& dateTime, const OrderStatus& orderStatus) : dateTime(dateTime), orderStatus(orderStatus) {}

Order::~Order() {}

DateTime Order::getDateTime() const {
    return dateTime;
}

void Order::setDateTime(const std::chrono::system_clock::time_point& newTimestamp) {
    dateTime.setTimestamp(newTimestamp);
}

OrderStatus Order::getStatus() const {
    return orderStatus;
}

void Order::setStatus(const OrderStatus& status) {
    this->orderStatus = status;
}

const std::vector<std::shared_ptr<OrderItem>>& Order::getItems() const {
    return items;
}

const std::shared_ptr<Client>& Order::getClient() const {
    return client;
}

void Order::setClient(const std::shared_ptr<Client>& client) {
    this->client = client;
}

void Order::addItem(const std::shared_ptr<OrderItem>& item) {
    items.push_back(item);
}

void Order::removeItem(const unsigned int itemToRemove) {
    if (itemToRemove >= 0 && itemToRemove < items.size()) {
        items.erase(items.begin() + itemToRemove);
    } 
    else {
        std::cerr << "Item not found in the list" << std::endl;
    }
}

double Order::total() const {
    double sum = 0;
    for (const auto& item : items) {
        sum += item->subTotal();
    }
    return sum;
}
 
std::string Order::fmtDecimal(const double& value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << value;
    return oss.str();
}

std::string Order::printOrder() const {
    std::stringstream ss;

    ss << "Order moment: ";
    ss << dateTime.printFormattedTimestamp() << std::endl;
    ss << "Order status: ";
    ss << printOrderStatus(orderStatus) << std::endl;
    ss << "Client: ";
    ss << client->printClient() << std::endl;
    ss << "Order items:\n";
    for (const auto& obj : Order::getItems()) {
        ss << obj->printOrderItem() << std::endl;
    }
    ss << "Total price: $";
    ss << fmtDecimal(total()) << std::endl;

    std::string print = ss.str();
    return print;
}
