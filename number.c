#include "main.h"

/**
 * number - prints number using putchar
 * @n: the number to print
 * Return: nothing
 */

void number(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		number(n / 10);

	_putchar((n % 10) + '0');
}
