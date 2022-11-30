#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * custom_specifier - printf no custom specifiers
 * @c: character given
 * @ap: array argument
 * @next: next character
 * Return: Number of character
 */

int custom_specifier(char c, char next, va_list ap)
{
	int count = 0;
	long size = va_arg(ap, long);

	switch (c)
	{
		case '+':
			if (size > 0)
				_putchar('+');
			count += parser(next, ap, next);
			break;
		case '-':
			count += parser(next, ap, next);
			break;
		case ' ':
			_putchar(' ');
			count += parser(next, ap, next);
			break;
		case '0':
			_putchar('0');
			count += parser(next, ap, next);
			break;
		case 'l':
			count += specifier(next, ap, 1);
			break;
		case 'h':
			count += specifier(next, ap, 2);
			break;
		case '#':
			_putchar(0 + '0');
			count += parser(next, ap, next);
			break;
		default:
			_putchar('%');
			_putchar(c);
			count += 2; }
	return (count);
}
