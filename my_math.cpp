#include "my_math.h"

#include <stdexcept>

namespace mymath {

int Calculation::sum(const int& firstTerm, const int& secondTerm)
{
    return firstTerm + secondTerm;
}

int Calculation::difference(const int& minuend, const int& subtrahend)
{
    return minuend - subtrahend;
}

int Calculation::product(const int& firstMultiplier,
                         const int& secondMultiplier)
{
    return firstMultiplier * secondMultiplier;
}

int Calculation::division(const int& dividend, const int& divisor)
{
    if (divisor == 0) {
        throw std::runtime_error("Division by zero is prohibited");
    }
    return dividend / divisor;
}

int Calculation::pow(const int& base, const int& degree)
{
    if (degree < 0) {
        throw std::runtime_error(
            "Calculating negative powers is not supported");
    }
    if (degree == 0) {
        if (base == 0) {
            throw std::runtime_error("Zero to the power of zero is undefined");
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

int Calculation::factorial(const int& num)
{
    if (num < 0) {
        throw std::runtime_error(
            "Factorial for negative numbers is not defined");
    }
    return factorialInternal(num);
}

int Calculation::factorialInternal(const int& num)
{
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorialInternal(num - 1);
}
}  // namespace mymath
