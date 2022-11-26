#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <inttypes.h>

int _printf(const char *format, ...);
int _putchar(char c);
int number(long n);
int hexa(uintmax_t n, int asc);
int specifier(char c, va_list ap);
int binary(long n);
int octal(long n);
int handleString(va_list ap);
int unsignedNumber(unsigned int n);
int specialString(va_list ap);
int pointerAddress(va_list ap);
int character(va_list ap);

#endif
