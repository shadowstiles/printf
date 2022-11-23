#include "main.h"

/**
 * hexa - Convert number tohexadecimal (base 16)
 * @n: The number
 * @asc: ASCII number for A || a
 * Return: Nothing
 */

void hexa(long n, int asc)
{
	int value;
	int result;

	if (n < 16)
		result = n;
	else
		result = n % 16;

	switch (result)
	{
		case 10:
			value = asc;
			break;
		case 11:
			value = asc + 1;
			break;
		case 12:
			value = asc + 2;
			break;
		case 13:
			value = asc + 3;
			break;
		case 14: 
			value = asc + 4;
			break;
		case 15:
			value = asc + 5;
			break;
		default:
			value = result;
	}

	if (n < 16)
	{
		_putchar(result < 10 ? value + '0' : value);
		_putchar(0 + '0');
		_putchar(asc + 23);
	}

	if (n >= 16)
		hexa((n / 16), asc);

	_putchar(result < 10 ? value + '0' : value);
}
