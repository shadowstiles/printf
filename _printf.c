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
	int total = 0;
	int *ptr;
	int i;

	ptr_format = malloc(sizeof(format));
	if (ptr_format == NULL)
		return (1);

	ptr = &total;

	for (i = 0; ptr_format[i] != '\0'; i++)
	{
		if (ptr_format[i] == 37)
			i = i + 2;
		else
			total++;
	}


	return (write(1, ptr, sizeof(total)));
}


