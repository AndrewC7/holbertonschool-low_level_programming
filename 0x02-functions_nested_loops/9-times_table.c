#include "holberton.h"
/**
 * times table - prints 9s time table
 *
 * Return: void
 */
void times_table(void)
{
	int num1, num2, result, n1, n2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('\n');
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;

			if (result > 9)
			{
				n1 = result / 10;
				n2 = result % 10;
				_putchar(n1 + '0');
				_putchar(n2 + '0');
				_putchar(',');
			}
			else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
