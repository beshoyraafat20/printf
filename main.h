#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _char(va_list args);
int _str(va_list args);
int _int(va_list args);
int _bin(va_list args);
#endif
