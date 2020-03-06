#include "holberton.h"

/**
 * print_square - prints square
 *
 * @size: square size
 *
 * Return: 0
 */
void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar ('\n');

	for (row = 1; row <= size; row++)
	{
		for (column = 2; column <= size; column++)
			_putchar ('#');

		_putchar ('#');
		_putchar ('\n');
	}
}
