#include "holberton.h"

/**
 * print_triangle - print triangle followed by new line
 *
 * @size: parameter passed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	else
		while (i < size)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
			i++;
		}
}
