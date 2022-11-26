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
		case 'c':
			count = count + character(ap);
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
			count = count + hexa(va_arg(ap, uintmax_t), 97);
			break;
		case 'X':
			count = count + hexa(va_arg(ap, uintmax_t), 65);
			break;
		case 'u':
			count = count + unsignedNumber(va_arg(ap, unsigned int));
			break;
		case 'S':
			count = count + specialString(ap);
			break;
		case 'p':
			count = count + pointerAddress(ap);
			break;
		default:
			_putchar('%');
			_putchar(c);
			count += 2; }
	return (count);
}

/**
 * pointerAddress - prints address pointer in hexadecimal format
 * @ap: array argument
 * Return: Number of character printed
 */

int pointerAddress(va_list ap)
{
	char null[7] = "(null)";
	int i;
	int count = 0;
	uintmax_t ptr;

	ptr = va_arg(ap, uintmax_t);

	if (ptr == '\0')
	{
		for (i = 0; i < 7; i++)
		{
			_putchar(null[i]);
			count++;
		}
	}
	else
	{
		_putchar(0 + '0');
		_putchar('x');
		count = count + hexa(ptr, 97);
		count += 2;
	}

	return (count);
}

/**
 * character - prints character to the screen
 * @ap: array argument
 * Return: Number of character printed
 */

int character(va_list ap)
{
	int count = 0;

	_putchar(va_arg(ap, int));
	count++;

	return (count);
}
