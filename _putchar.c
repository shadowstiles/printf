#include "main.h"
#include <unistd.h>

/**
 * _putchar - To write to the output
 * @c: Character to write
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
