#include <stdexcept>

#include "math.h"

namespace mymath {

class Calculation {
   public:
    static int sum(int firstTerm, int secondTerm)
    {
        return firstTerm + secondTerm;
    }

    static int difference(int minuend, int subtrahend)
    {
        return minuend - subtrahend;
    }

    static int product(int firstMultiplier, int secondMultiplier)
    {
        return firstMultiplier * secondMultiplier;
    }

    static int division(int dividend, int divisor)
    {
        if (divisor == 0) {
            throw std::runtime_error("Division by zero is prohibited");
        }
        return dividend / divisor;
    }

    static int pow(int base, int degree)
    {
        if (degree < 0) {
            throw std::runtime_error(
                "Calculating negative powers is not supported");
        }
        if (degree == 0) {
            if (base == 0) {
                throw std::runtime_error(
                    "Zero to the power of zero is undefined");
            } else {
                return 1;  // n^0 = 1
            }
        }
        int ans = 1;
        int value = base;
        int power = degree;
        while (power != 0) {
            if (power % 2 == 1) {
                ans *= value;
            }
            power >>= 1;
            value *= value;
        }
        return ans;
    }

    static int factorial(int num)
    {
        if (num < 0) {
            throw std::runtime_error(
                "Factorial for negative numbers is not defined");
        }
        return factorialInternal(num);
    }

   private:
    static int factorialInternal(int num)
    {
        if (num == 0 || num == 1) {
            return 1;
        }
        return num * factorialInternal(num - 1);
    }
};
}  // namespace mymath