#include "main.h"

/**
 * binary - Convert number to binary
 * @n: The number
 * Return: binary number
 */

int binary(long n)
{
	int count = 0;

	if (n >= 2)
		count = count + binary(n / 2);

	_putchar((n % 2) + '0');
	count++;

	return (count);
}
