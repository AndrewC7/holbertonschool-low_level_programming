#include "holberton.h"
#include <stdio.h>
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

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = length -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
