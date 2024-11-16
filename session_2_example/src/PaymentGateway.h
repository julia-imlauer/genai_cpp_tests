#ifndef PAYMENT_GATEWAY_H
#define PAYMENT_GATEWAY_H

#include <string>

class PaymentGateway {
public:
    virtual ~PaymentGateway() = default;

    // Processes a payment and returns success or failure
    virtual bool ProcessPayment(const std::string& orderId, double amount) = 0;
};

#endif // PAYMENT_GATEWAY_H

