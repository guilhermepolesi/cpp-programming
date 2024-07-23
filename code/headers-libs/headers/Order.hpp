#ifndef ORDER_H
#define ORDER_H

#include <memory>
#include <vector>

#include "OrderStatus.hpp"
#include "OrderItem.hpp"
#include "Client.hpp"
#include "DateTime.hpp"

class Order {
    private:
        DateTime dateTime;
        OrderStatus orderStatus;

    public:
        Order(const DateTime& dateTime, const OrderStatus& orderStatus);
        ~Order();
        std::vector<std::shared_ptr<OrderItem>> items;
        std::shared_ptr<Client> client;

        DateTime getDateTime() const;
        void setDateTime(const std::chrono::system_clock::time_point& newTimestamp);
        OrderStatus getStatus() const;
        void setStatus(const OrderStatus& status);
        const std::vector<std::shared_ptr<OrderItem>>& getItems() const;
        const std::shared_ptr<Client>& getClient() const;
        void setClient(const std::shared_ptr<Client>& client);
        void addItem(const std::shared_ptr<OrderItem>& item);
        void removeItem(const unsigned int itemToRemove);
        double total() const;
        static std::string fmtDecimal(const double& value);
        std::string printOrder() const;
};
        
#endif // ORDER_H
