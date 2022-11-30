#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rot13 - ROT13 encoding, a simple letter substitution cipher
 * @ap: array argument
 * Return: Number of printed character
 */

int rot13(va_list ap)
{
	char lower[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char code[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i1 = 0;
	int i2;
	int count = 0;
	char *c;

	c = malloc(sizeof(va_list));

	if (c == NULL)
		return (0);

	c = va_arg(ap, char*);

	while (c[i1] != '\0')
	{
		for (i2 = 0; lower[i2] != '\0'; i2++)
		{
			if (c[i1] == lower[i2])
			{
				c[i1] = code[i2];
				_putchar(c[i2]);
				count++;
				break;
			}
		}
		i1++;
	}
	return (count);
}
