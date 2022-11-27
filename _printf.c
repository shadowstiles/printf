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
	char firstArg = NULL;
	uintmax_t widthSize = -1;
	uintmax_t precisionNmber = -1;
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
			i++;
			for (j = 0; j < 8; j++)
			{
				switch (format[i])
				{
					case formatSpecifier[j]:
						count += specifier(format[i], arglist);
						break;
					case formatSpecifier2[j]:
						count += specifier2(format[i], arglist);
						break;
					case customSpecifier[j]:
						count += custom_specifier(format[i], format[++i], arglist);
						break;
					case format[i] > 48 && format[i] < 58:
					case format[i] == '.':
						for (; (format[i] > 48 && format[i] < 58) || format[i] == '.'; i++)
						{
							if (format[i] == '.')
							{
								firstArg = '.';
								precisionNumber = format[++i];
							}
							else
								precisionNumber = (precisionNumber * 10) + format[i];
							
							if (widthSize < 0 && firstArg != '.')
								widthSize = format[i];
							else if (firstArg != '.')
								widthSize = (widthSize * 10) + format[i];
						}
						count += other_specifier(firstArg, widthSize, precisionNumber, format[++i]);
					default:
						_putchar('%');
						_putchar(format[i]);
						count += 2;
				}
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
