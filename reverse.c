#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * specifier - Reverser a string
 * @ap: array argument
 * Return: Number of printed character
 */

int reverseString(va_list ap)
{
	char *ptr;
	int count;
	int size, i;

	ptr = malloc(sizeof(va_list));

	if (ptr == NULL)
		return (0);

	ptr = va_arg(ap, char*);
	size = strlen(ptr);

	for (i = size; i >= 0; i--)
	{
		_putchar(ptr[i]);
		count++;
	}

	return (count);
}
