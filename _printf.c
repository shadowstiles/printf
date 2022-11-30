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
	int i, j;
	int k = 0;
	int count = 0;
	va_list arglist;
	char customSpecifier[] = {'+', '-', ' ', '0', 'l', 'h', '#'};

	if (format == NULL)
		return (-1);
	va_start(arglist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if ((format[i] > 48 && format[i] < 58) || format[i] == '.')
			{
				for (; (format[i] > 48 && format[i] < 58) || format[i] == '.'; i++)
				{
					count += non_custom(format[i], format[i + 1], arglist);
					i++;
				}
			}
			else if (format[i] == customSpecifier[k])
			{
				for (j = 0; j < 8; j++)
					i++;
				k++;
			}
			else 
			{
				count += parser(format[i], arglist, format[i + 1]);
			}
			i++;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(arglist);

	return (count);
}
