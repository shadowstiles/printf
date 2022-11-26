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
	int i, result;
	int count = 0;
	va_list arglist;

	if (format == NULL)
		return (-1);

	va_start(arglist, format);

	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == 37)
		{
			if (format[i] == '%' && format[i + 1] != ' ')
			{
				_putchar(format[i + 1]);
				count++;
			}
			else
			{
				result = specifier(format[i + 1], arglist);
				count = count + result;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(arglist);

	return (count);
}
