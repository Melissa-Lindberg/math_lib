#pragma once

namespace mymath {
class Calculation {
   public:
    static int sum(const int &firstTerm, const int &secondTerm);
    static int difference(const int &minuend, const int &subtrahend);
    static int product(const int &firstMultiplier, const int &secondMultiplier);
    static int division(const int &dividend, const int &divisor);
    static int pow(const int &base, const int &degree);
    static int factorial(const int &num);

   private:
    static int factorialInternal(const int &num);
};
}  // namespace mymath
