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
	int count = 0;
	va_list arglist;

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
                	count += non_custom(format[i], arglist, format[i + 1]);
					i++;
				}
			}

			for (j = 0; j < 8; j++)
				if (format[i] == customSpecifier[j])
					i++;

			count += parser(format[i], arglist, format[i + 1]);
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
