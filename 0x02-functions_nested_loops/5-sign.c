#include "holberton.h"
/**
 * print_sign - prints sign of number
 *
 * @n: input from user
 *
 * Return: 0 for 0, 1 for positive, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
