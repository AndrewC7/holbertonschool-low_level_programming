#include "holberton.h"

/**
 * puts_half - prints half a string
 *
 * @str: parameter passed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, x, y;

	while (str[i] != '\0')
		i++;

	y = i;

	if (y % 2 == 0)
	{
		for (x = y / 2; x < y; x++)
			_putchar(str[x]);
	}

	else
	{
		for (x = (y + 1) / 2; x < y; x++)
			_putchar(str[x]);
	}
	_putchar('\n');
}
