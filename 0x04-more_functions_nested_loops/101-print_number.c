#include "holberton.h"

/**
 * print_number - converts int to string
 *
 * @n: int passed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int y;

	if (n > 9)
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}

	else if (n > -1)
		_putchar('0' + n);

	else if (n > -10)
	{
		_putchar('-');
		n = n * (-1);
		_putchar('0' + n);
	}
	else
	{
		_putchar('-');
		n = n * (-1);
		y = (unsigned int) n;
		print_number(y / 10);
		_putchar('0' + (y % 10));
	}
}
