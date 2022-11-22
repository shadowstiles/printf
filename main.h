#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void number(long n);
void hexa(long n, int asc);
void specifier(char c, va_list ap);
void binary(long n);
void octal(long n);

#endif
