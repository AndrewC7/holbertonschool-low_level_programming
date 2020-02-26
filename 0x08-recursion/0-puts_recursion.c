#include "holberton.h"

/**
 * _puts_recursion - prints char recursively
 *
 * @s: pointer to char to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
