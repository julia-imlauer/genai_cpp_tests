#include "MathOperations.h"

int MathOperation::Add(int a, int b) {
    return a + b;
}

int MathOperation::Subtract(int a, int b) {
    return a - b;
}

int MathOperation::Multiply(int a, int b) {
    return a * b;
}

double MathOperation::Divide(int a, int b) {
    return (b != 0) ? static_cast<double>(a) / b : 0;
}

