#include "holberton.h"

/**
 * print_alphabet_x10 - print alaphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
