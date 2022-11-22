#include "main.h"

/**
 * octal - Convert number to octal (base 8)
 * @n: The number
 * Return: Nothing
 */

void octal(long n)
{
	if (n < 8)
		_putchar(n + '0');

	if (n >= 8)
		binary(n / 8);

	_putchar((n % 8) + '0');
}
