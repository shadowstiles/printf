#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int number(long n);
int hexa(long n, int asc);
int specifier(char c, va_list ap);
int binary(long n);
int octal(long n);
int handleString(va_list ap);
int unsignedNumber(unsigned n);

#endif
