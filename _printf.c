#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A function to print to the standard output
 * @format: character string
 * @...: other variable
 * Return: 0 || 1
 */

int _printf(const char *format, ...)
{
	int i;
	const char *ptr;
	va_list arglist;
	
	ptr = malloc(sizeof(va_list));
	if (ptr = NULL || format == NULL)
		return (0);
	
	ptr = format;
	va_start(arglist, format);

	for (i = 0; ptr[i] != '\0'; i++)
	{

		if (ptr[i] == 37)
		{
			if (ptr[i] == '%' && ptr[i + 1] != ' ')
				_putchar(ptr[i + 1]);
			else
				specifier(ptr[i + 1], arglist);
			i++;
		}
		else
			_putchar(ptr[i]);
	}

	va_end(arglist);

	return (0);
}
