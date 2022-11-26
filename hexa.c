#include "main.h"

/**
 * hexa - Convert number tohexadecimal (base 16)
 * @n: The number
 * @asc: ASCII number for A || a
 * Return: Number of characters printed
 */

int hexa(uintmax_t n, int asc)
{
	int value;
	int count = 0;

	switch (n % 16)
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
			value = n % 16;
	}

	if (n >= 16)
		count = count + hexa((n / 16), asc);

	_putchar((n % 16) < 10 ? value + '0' : value);
	count++;

	return (count);
}
