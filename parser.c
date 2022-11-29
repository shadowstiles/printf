#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * paser - A function to print to the standard output
 * @c: character
 * @ap: va_list
 * Return: 0 || 1
 */

int parser(char c, va_list ap, char next)
{
	int j;
	int count = 0;

	for (j = 0; j < 8; j++)
	{
		if (c == formatSpecifier[j])
		{
			count += specifier(c, ap);
			return (count);
		}
		if (c == formatSpecifier2[j])
		{
			count += specifier2(c, ap);
			return (count);
		}
		if (c == customSpecifier[j])
		{
			count += custom_specifier(c, next, ap);
			return (count);
		}
		else
		{
			_putchar('%');
			_putchar(c);
			count += 2;
		}
	}
	
	return (count);
}

/**
 * non_custom - A function to print to the standard output
 * @c: character
 * @ap: va_list
 * @next: next character
 * Return: Number of cgaracter printed
 */

int non_custom(char c, va_list ap, char next)
{
	int count = 0;
	char arg;
	long width = -1;
	long precision = -1;
	
	
	if (c == '.')
	{
		arg = '.';
		precision = next;
	}
	else
		precision = (precision * 10) + c;

	if (width < 0 && arg != '.')
		width = c;
	else if (arg != '.')
		width = (width * 10) + c;
	
	count += other_specifier(arg, width, precision, next, ap);
	
	return (count);
}