#include "holberton.h"

/**
 *print_binary - prints binary representation of a number
 *
 *@n: int
 *
 *Return: 0
 */
void print_binary(unsigned long int n)
{
	int x, i = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
