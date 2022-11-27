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
	int count = 0;

	switch (c)
	{
		case 'd':
		case 'i':
			count = count + number(va_arg(ap, long));
			break;
		case 'b':
			count = count + binary(va_arg(ap, uintmax_t));
			break;
		case 'o':
			count = count + octal(va_arg(ap, uintmax_t));
			break;
		case 'x':
			count = count + hexa(va_arg(ap, uintmax_t), 97);
			break;
		case 'X':
			count = count + hexa(va_arg(ap, uintmax_t), 65);
			break;
		case 'u':
			count = count + unsignedNumber(va_arg(ap, unsigned int));
			break;
		default:
			_putchar('%');
			_putchar(c);
			count += 2; }
	return (count);
}
