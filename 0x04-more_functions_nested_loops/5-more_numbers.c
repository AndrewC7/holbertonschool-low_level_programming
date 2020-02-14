#include "holberton.h"

/**
 * more_numbers - Print 0-14, 10x
 *
 *Return: Void
 */

void more_numbers(void)
{
	int num1, num2, ones, tens;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			ones = num2 % 10;
			tens = num2 / 10;

			if (tens != 0)
				_putchar (tens + '0');
			_putchar (ones + '0');
		}
		_putchar ('\n');
	}

}

