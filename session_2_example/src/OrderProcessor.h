#ifndef ORDER_PROCESSOR_H
#define ORDER_PROCESSOR_H

#include <string>
#include "PaymentGateway.h"

class OrderProcessor {
public:
    OrderProcessor(PaymentGateway* gateway);
    bool ProcessOrder(const std::string& orderId, double amount);

private:
    PaymentGateway* paymentGateway;
};

#endif // ORDER_PROCESSOR_H

