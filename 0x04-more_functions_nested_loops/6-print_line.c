#include "holberton.h"
/**
 * print_line - prints line accross terminal
 * 
 * @n: input, length of line
 * 
 * Return: Void
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
		_putchar ('_');
	_putchar ('\n');
}
