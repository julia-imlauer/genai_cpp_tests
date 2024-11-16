#include "OrderProcessor.h"

OrderProcessor::OrderProcessor(PaymentGateway* gateway) : paymentGateway(gateway) {}

bool OrderProcessor::ProcessOrder(const std::string& orderId, double amount) {
    // Log order processing (omitted for brevity)
    return paymentGateway->ProcessPayment(orderId, amount);
}

