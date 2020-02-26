#include "holberton.h"

/**
 * _print_rev_recursion - prints char recursively in reverse
 *
 * @s: pointer to char to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
