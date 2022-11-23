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
	int b;
	int i;

	if (c == 'd' || c == 'i')
	{
		b = va_arg(ap, int);
		number(b);
	}

	if (c == 'c')
		_putchar(va_arg(ap, int));

	if (c == 's')
	{
		a = va_arg(ap, char *);

		for (i = 0; a[i] != '\0'; i++)
			_putchar(a[i]);
	}

	if (c == 'b')
		binary(va_arg(ap, int));

	if (c == 'o')
		octal(va_arg(ap, int));

	if (c == 'x')
		hexa(va_arg(ap, int), 97);

	if (c == 'X')
		hexa(va_arg(ap, int), 65);

	if (c == 'p')
		hexa(&va_arg(ap, int), 97);
}
