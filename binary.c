#include "main.h"

/**
 * binary - Convert number to binary
 * @n: The number
 * Return: binary number
 */

void binary(long n)
{
	if (n < 2)
		_putchar(n + '0');

	if (n >= 2)
		binary(n / 2);

	_putchar((n % 2) + '0');
}
