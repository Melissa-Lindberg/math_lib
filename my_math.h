#pragma once

namespace mymath {
class Calculation {
   public:
    int sum(int firstTerm, int secondTerm);
    int difference(int minuend, int subtrahend);
    int product(int firstMultiplier, int secondMultiplier);
    int division(int dividend, int divisor);
    int pow(int base, int degree);
    int factorial(int num);
};
}  // namespace mymath
