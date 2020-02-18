#include "holberton.h"
/**
 * print_rev - print string in reverse
 *
 * @s: string
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int length, i;

	for (; s != '\0'; s++)
		length++;

	for (i = length; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
