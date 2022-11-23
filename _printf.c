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
	va_list arglist;

	va_start(arglist, format);

	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == 37)
		{
			if (format[i + 1] == 37)
				_putchar(format[i + 1]);
			else
			{
				specifier(format[i + 1], arglist);
				i++;
			}
		}	
		else
			_putchar(format[i]);
	}

	va_end(arglist);
	_putchar('\n');

	return (0);
}
