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
			count += specifier(c, ap);
		if (c == formatSpecifier2[j])
			count += specifier2(c, ap);
		if (c == customSpecifier[j])
			count += custom_specifier(c, next, ap);
        else
        {
            _putchar('%');
            _putchar(c);
            count += 2;
        }
	}

	return (count);
}

int non_custom(char c, va_list ap, char next)
{
    int count = 0;
    char arg = NULL;
	uintmax_t width = 1;
	uintmax_t precision = 1;
    
    if (c == '.')
	{
		arg = '.';
		precision = next;
	}
    else
		precision = (precision * 10) + c;
							
	if (widthSize < 0 && arg != '.')
        widthSize = c;
	else if (arg != '.')
		widthSize = (widthSize * 10) + c;

    count += other_specifier(arg, width, precision, next, ap);

    return (count);
}

