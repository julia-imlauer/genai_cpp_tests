#ifndef MATH_OPERATION_H
#define MATH_OPERATION_H

class MathOperation {
public:
    int Add(int a, int b);
    int Subtract(int a, int b);
    int Multiply(int a, int b);
    double Divide(int a, int b); // Returns 0 if b == 0
};

#endif // MATH_OPERATION_H

