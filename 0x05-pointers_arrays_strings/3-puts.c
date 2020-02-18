#include "holberton.h"
/**
 * _puts - prints string
 *
 * @str: string
 *
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
