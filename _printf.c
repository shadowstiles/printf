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
            	for (; (format[i] > 48 && format[i] < 58) || format[i] == '.'; i++)
                	non_custom(format[i], ap, format[++i]);

			parser(format[i], arglist, format[i + 1]);

			for (j = 0; j < 8; j++)
				if (c == customSpecifier[j])
					i++;
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
