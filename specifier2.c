#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * specifier - printf function specifiers
 * @c: character given
 * @ap: array argument
 * Return: Nothing
 */

int specifier(char c, va_list ap)
{
	int count = 0;
  
  switch (c)
	{
    case 'c':
			  count = count + character(ap);
			  break;
      
    default:
			_putchar('%');
			_putchar(c);
			count += 2; }
	return (count);
}
