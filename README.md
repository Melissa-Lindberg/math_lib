# my_math

A small C++ math library providing basic arithmetic and simple advanced operations.
All functions return `bool` to indicate success, and write results to an output reference.

## Available Functions

```cpp
bool sum_calculation(int num1, int num2, int &ans);
bool difference_calculation(int num1, int num2, int &ans);
bool product_calculation(int num1, int num2, int &ans);
bool division_calculation(int num1, int num2, int &ans);

bool pow_calculation(int num1, int num2, int &ans);
bool factorial_calculation(int num, int &ans);
```

## Build

```sh
cmake -S . -B build
cmake --build build
```

This produces the `my_math` library.

## Usage Example

```cpp
#include "my_math.h"
#include <iostream>

int result;
if (MyMath::sum_calculation(5, 7, result)) {
    std::cout << "5 + 7 = " << result << '\n';
}
```

## License

GNU General Public License (GPL).
