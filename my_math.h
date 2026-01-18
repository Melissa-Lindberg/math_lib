#pragma once

namespace mymath {
class Calculation {
   public:
    static int sum(int firstTerm, int secondTerm);
    static int difference(int minuend, int subtrahend);
    static int product(int firstMultiplier, int secondMultiplier);
    static int division(int dividend, int divisor);
    static int pow(int base, int degree);
    static int factorial(int num);
};
}  // namespace mymath
