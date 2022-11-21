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
	int *ptr_format;
	enum symbol {c = 99, s = 115, % = 37};
	int total = 0;

	ptr_format = malloc(sizeof(format));
	if (ptr_format == NULL)
		return (1);

	va_start(ptr_format, format);

	for (i = 0; i < ptr_format; i++)
	{
		if (ptr_format[i] == '\0')
			break;

		if (ptr_format[i] == 37)
			i = i + 2;
		else
			total++;
	}


	return (write(1, total, sizeof(total)));
}


