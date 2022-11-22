#include "main.h"

/**
 * hexa - Convert number tohexadecimal (base 16)
 * @n: The number
 * Return: Nothing
 */

void hexa(long n, char c)
{
	if (n < 16)
		_putchar(n + '0');

	if (n >= 16)
		binary(n / 16);

	switch (n % 16)
	{
		case 10:
			value = a;
			break;
		case 11:
			value = b;
			break;
		case 12:
			value = c;
			break;
		case 13:
			value = d;
			break;
		case 14: 
			value = e;
			break;
		case 15:
			value = f;
			break;
		default:
			value = (n % 16);
	}

	_putchar((n % 16) < 10 ? value + '0' : value);
}
