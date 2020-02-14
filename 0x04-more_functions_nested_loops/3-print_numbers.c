#include "holberton.h"

/**
 * print_numbers - print numbers 0-9
 *
 *Return: Void
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
		_putchar (num);
	_putchar ('\n');
}
