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
	char formatSpecifier[8] = {'u', 'i', 'x', 'X', 'o', 'd', 'b'};
	char formatSpecifier2[8] = {'s', 'S', 'c', 'r', 'R', 'p', '%'}
	char customSpecifier[8] = {'+', '-', ' ', '0', 'l', 'h', '#'};

	if (format == NULL)
		return (-1);

	va_start(arglist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 8; j++)
			{
				switch (format[i + 1])
				{
					case formatSpecifier[j]:
						count += specifier(format[i + 1], arglist);
						break;
					case formatSpecifier2[j]:
						count += specifier2(format[i + 1], arglist);
						break;
					case customSpecifier[j]:
						count += custom_specifier(format[i + 1], format[i + 2], arglist);
						break;
					default:
						for (k = i; format[k + 1] > 48 && format[k + 1] < 58; k++)
						{
							if (result < 0)
								result = format[k + 1];
							else
								result = (result * 10) + format[k + 1];
						
				else
				{

					count += other_specifier(
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
