#include "main.h"

/**
 * octal - Convert number to octal (base 8)
 * @n: The number
 * Return: Nothing
 */

int octal(long n)
{
	int count = 0;

	if (n >= 8)
		count = count + octal(n / 8);

	_putchar((n % 8) + '0');
	count++;

	return (count);
}
