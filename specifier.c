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
		a = malloc(sizeof(va_arg(ap, int)));

		for (i = 0; a[i] != '\0'; i++)
			_putchar(a[i]);
	}
}
