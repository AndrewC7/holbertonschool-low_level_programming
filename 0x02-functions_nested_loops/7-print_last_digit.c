#include "holberton.h"
/**
 * print_last_digit - prints last digit of number
 *
 * @num: input passed to function
 *
 * Return: last digit of number
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
		num = num * -1;

	last = num % 10;
	_putchar(last + '0');
	return (last);
}
