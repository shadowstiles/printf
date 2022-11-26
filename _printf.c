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
	int count = 0;
	va_list arglist;

	if (format == NULL)
		return (-1);

	va_start(arglist, format);

	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				count++;
			}
			else
			{
				if (format[i + 1] == '\0')
					return (0);
				else
					count = count + specifier(format[i + 1], arglist);
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
