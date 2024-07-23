#ifndef ORDER_STATUS_H
#define ORDER_STATUS_H

enum class OrderStatus {
    PENDING_PAYMENT = 1,
    PROCESSING = 2,
    SHIPPED = 3,
    DELIVERED = 4
};

OrderStatus intToOrderStatus(const unsigned int value);

std::string printOrderStatus(const OrderStatus value);

#endif // ORDER_STATUS_H
