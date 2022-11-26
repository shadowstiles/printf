#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handleString - function to print a string
 * @ap: va_list
 * Return: Number of character printed
 */

int handleString(va_list ap)
{
	char *a;
	int i;
	int count = 0;

	a = va_arg(ap, char *);
	if (a == 0)
		a = "(null)";

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		count++;
	}

	return (count);
}

/**
 * specialString - function to print a string
 * @ap: va_list
 * Return: Number of character printed
 */

int specialString(va_list ap)
{
	char *a;
	int i;
	int count = 0;

	a = va_arg(ap, char *);
	if (a == 0)
		a = "(null)";

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] > 0 && a[i] < 32) || a[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (a[i] < 16)
			{
				_putchar(0 + '0');
				count++;
				count = count + hexa(va_arg(ap, long), 97);
			}
			else
				count = count + hexa(va_arg(ap, long), 97);

			count += 2;
		}
		else
		{
			_putchar(a[i]);
			count++;
		}
	}

	return (count);
}
