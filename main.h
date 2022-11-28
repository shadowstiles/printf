#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <inttypes.h>

char formatSpecifier[] = {'u', 'i', 'x', 'X', 'o', 'd', 'b'};
char formatSpecifier2[] = {'s', 'S', 'c', 'r', 'R', 'p', '%'}
char customSpecifier[] = {'+', '-', ' ', '0', 'l', 'h', '#'};

int _printf(const char *format, ...);
int _putchar(char c);
int number(long n);
int hexa(uintmax_t n, int asc);
int specifier(char c, va_list ap);
int specifier2(char c, va_list ap);
int custom_specifier(char c, char next, va_list ap);
int other_specifier(char first, uintmax_t widthSize, uintmax_t precision, char c);
int binary(uintmax_t n);
int octal(uintmax_t n);
int handleString(va_list ap);
int unsignedNumber(unsigned int n);
int specialString(va_list ap);
int pointerAddress(va_list ap);
int character(va_list ap);
int non_custom(char c, va_list ap, char next);
int parser(char c, va_list ap, char next);
int reverseString(va_list ap);
int rot13(va_list ap)

#endif
