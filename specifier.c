#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * specifier - printf function specifiers
 * @c: character given
 * @ap: array argument
 * @type: type of integer
 * Return: Nothing
 */

int specifier(char c, va_list ap, int type)
{
	int count = 0;
	long size = va_arg(ap, long);
	int shortSize = va_arg(ap, int);

	switch (c)
	{
		case 'd':
		case 'i':
			if (type == 1)
				count += number(size);
			else if (type == 2)
				count += number(shortSize);
			break;
		case 'b':
			count += binary(va_arg(ap, uintmax_t));
			break;
		case 'o':
			count += octal(va_arg(ap, uintmax_t));
			break;
		case 'x':
			count += hexa(va_arg(ap, uintmax_t), 97);
			break;
		case 'X':
			count += hexa(va_arg(ap, uintmax_t), 65);
			break;
		case 'u':
			count += unsignedNumber(va_arg(ap, unsigned int));
			break;
		default:
			_putchar('%');
			_putchar(c);
			count += 2; }
	return (count);
}
