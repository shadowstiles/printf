#include "main.h"

/**
 * number - prints number using putchar
 * @n: the number to print
 * Return: nothing
 */

int number(long n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
		count = count + number(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
