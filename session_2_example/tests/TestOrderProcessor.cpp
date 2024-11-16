#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "OrderProcessor.h"
#include "PaymentGateway.h"

// // Google Mock implementation of PaymentGateway
// class MockPaymentGateway : public PaymentGateway {
// public:
//     MOCK_METHOD(bool, ProcessPayment, (const std::string& orderId, double amount), (override));
// }

class MockPaymentGateway : public PaymentGateway {
public:
    bool ProcessPayment(const std::string& orderId, double amount) override {
        // Simulates payment success for amounts less than $100
        return amount < 100.0;
    }
};

class OrderProcessorIntegrationTest : public ::testing::Test {
protected:
    MockPaymentGateway mockGateway;
    OrderProcessor* orderProcessor;

    void SetUp() override {
        orderProcessor = new OrderProcessor(&mockGateway);
    }

    void TearDown() override {
        delete orderProcessor;
    }
};

TEST_F(OrderProcessorIntegrationTest, ProcessOrder_Success) {
    std::string orderId = "ORDER123";
    double amount = 50.0;

    // GMock
    // // Define mock behavior: return true for this test case
    // EXPECT_CALL(mockGateway, ProcessPayment(orderId, amount))
    //     .Times(1)
    //     .WillOnce(Return(true));

    EXPECT_TRUE(orderProcessor->ProcessOrder(orderId, amount));
}

TEST_F(OrderProcessorIntegrationTest, ProcessOrder_Failure) {
    std::string orderId = "ORDER124";
    double amount = 150.0;

    // GMock
    // // Define mock behavior: return false for this test case
    // EXPECT_CALL(mockGateway, ProcessPayment(orderId, amount))
    //     .Times(1)
    //     .WillOnce(Return(false));

    EXPECT_FALSE(orderProcessor->ProcessOrder(orderId, amount));
}

