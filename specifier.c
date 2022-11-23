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
	char *a;
	long b;
	int i;

	if (c == 'd' || c == 'i')
	{
		b = va_arg(ap, long);
		number(b);
	}

	if (c == 'c')
		_putchar(va_arg(ap, int));

	if (c == 's')
	{
		a = va_arg(ap, char *);
		if (a == 0)
			a = "(null)";

		for (i = 0; a[i] != '\0'; i++)
			_putchar(a[i]);
	}

	if (c == 'b')
		binary(va_arg(ap, long));

	if (c == 'o')
		octal(va_arg(ap, long));

	if (c == 'x')
		hexa(va_arg(ap, long), 97);

	if (c == 'X')
		hexa(va_arg(ap, long), 65);
}
