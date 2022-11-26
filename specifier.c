#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * specifier - printf function specifiers
 * @c: character given
 * @ap: array argument
 * Return: Nothing
 */

int specifier(char c, va_list ap)
{
	long b;
	int count = 0;

	switch (c)
	{
		case 'd':
		case 'i':
			b = va_arg(ap, int);
			count = count + number(b);
			break;
		case 'c':
			_putchar(va_arg(ap, int));
			count++;
			break;
		case 's':
			count = count + handleString(ap);
			break;
		case 'b':
			count = count + binary(va_arg(ap, long));
			break;
		case 'o':
			count = count + octal(va_arg(ap, long));
			break;
		case 'x':
			count = count + hexa(va_arg(ap, long), 97);
			break;
		case 'X':
			count = count + hexa(va_arg(ap, long), 65);
			break;
		default:
			_putchar('%');
			_putchar(c);
			count += 2;
	}

	return (count);
}

/**
 * handleString - function to print a string
 * @ap: va_list
 * Return: Nothing
 */

int handleString(va_list ap)
{
	char *a;
	int i;
	int count = 0;

	a = va_arg(ap, char *);
	if (a == 0)
		a = "(null)";

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		count++;
	}

	return (count);
}
