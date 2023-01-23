# printf - Custom printf function implementation

This repository contains an implementation of the `printf` function in C. This implementation includes the following features:

- Handling of the following conversion specifiers: `c`, `s`, and `%`.
- Output to the standard output stream (`stdout`).
- A return value of the number of characters printed (excluding the null byte used to end output to strings)

This implementation of the `printf` function is intended to be used as a learning tool for understanding how the `printf` function works and can be implemented from scratch. It is not intended to be used as a replacement for the standard `printf` function.

## Requirements
- GCC compiler
- C89 standard

## Usage
To use this implementation of the `printf` function, simply include the `printf.h` header file in your C project and call the `_printf` function with the desired format string and any additional arguments.

```c
#include "printf.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}
