#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <inttypes.h>

int _printf(const char *format, ...);
int _putchar(char c);
int number(long n);
int hexa(uintmax_t n, int asc);
int specifier(char c, va_list ap, int type);
int specifier2(char c, va_list ap);
int custom_specifier(char c, char next, va_list ap);
int other_specifier(char first, long width, char c, va_list ap);
int binary(uintmax_t n);
int octal(uintmax_t n);
int handleString(va_list ap);
int unsignedNumber(unsigned int n);
int specialString(va_list ap);
int pointerAddress(va_list ap);
int character(va_list ap);
int non_custom(char c, char next, va_list ap);
int parser(char c, va_list ap, char next);
int reverseString(va_list ap);
int rot13(va_list ap);

#endif
