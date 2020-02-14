#include "holberton.h"

/**
 * print_numbers - print numbers 0-9
 *
 *Return: Void
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
		_putchar (num);
	_putchar ('\n');
}
