#include <cerrno>
#include <climits>
#include <stdexcept>

#include "math.h"

namespace {
int factorial_calculation_internal(int num)
{
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial_calculation_internal(num - 1);
}
}  // namespace

namespace MyMath {

bool sum_calculation(int num1, int num2, int &ans)
{
    ans = num1 + num2;
    return true;
}

bool difference_calculation(int num1, int num2, int &ans)
{
    ans = num1 - num2;
    return true;
}

bool product_calculation(int num1, int num2, int &ans)
{
    ans = num1 * num2;
    return true;
}

bool division_calculation(int num1, int num2, int &ans)
{
    if (num2 == 0) {
        return false;
    }
    ans = num1 / num2;
    return true;
}

bool pow_calculation(int num1, int num2, int &ans)
{
    if (num2 < 0) {
        return false;
    }
    if (num2 == 0) {
        if (num1 == 0) {
            return false;
        } else {
            ans = 1;
            return true;
        }
    }
    ans = 1;
    int value = num1;
    int power = num2;
    while (power != 0) {
        if (power % 2 == 1) {
            ans *= value;
        }
        power >>= 1;
        value *= value;
    }
    return true;
}

bool factorial_calculation(int num, int &ans)
{
    if (num < 0) {
        return false;
    }
    ans = factorial_calculation_internal(num);
    return true;
}
}  // namespace MyMath