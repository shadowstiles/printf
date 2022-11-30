#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * other_specifier - non custom format specifier for c
 * @c: lat character
 * @ap: va_list
 * @first: first character
 * @width: Width size to add to printf
 * @precision: precision size
 * Return: Number of character printed
 */

int other_specifier(char first, long width, char c, va_list ap)
{
	int count = 0;
	int i;
	
	if (first == '.')
		count = 0;

	if (width > 0)
	{
		for (i = 1; i <= width; i++)
		{
			_putchar(' ');
			count++;
		}

		count += specifier(c, ap, 1);
	}
	
	return (count);
}