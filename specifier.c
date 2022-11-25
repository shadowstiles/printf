#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * specifier - printf function specifiers
 * @c: character given
 * @ap: array argument
 * Return: Nothing
 */

void specifier(char c, va_list ap)
{
	long b;

	switch (c)
	{
		case 'd':
		case 'i':
			b = va_arg(ap, int);
			number(b);
			break;
		case 'c':
			_putchar(va_arg(ap, int));
			break;
		case 's':
			handleString(ap);
			break;
		case 'b':
			binary(va_arg(ap, long));
			break;
		case 'o':
			octal(va_arg(ap, long));
			break;
		case 'x':
			hexa(va_arg(ap, long), 97);
			break;
		case 'X':
			hexa(va_arg(ap, long), 65);
			break;
		default:
			_putchar('%');
			_putchar(c);
	}
}

/**
 * handleString - function to print a string
 * @ap: va_list
 * Return: Nothing
 */

void handleString(va_list ap)
{
	char *a;
	int i;

	a = va_arg(ap, char *);
	if (a == 0)
		a = "(null)";

	for (i = 0; a[i] != '\0'; i++)
		_putchar(a[i]);
}
