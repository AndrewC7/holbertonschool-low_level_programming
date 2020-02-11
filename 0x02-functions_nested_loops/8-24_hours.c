#include "holberton.h"
/**
 * jack_bauer - prints 00:00 - 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 2; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 5; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					if (num1 == 2 && num2 > 3)
						continue;
					else
					{
						_putchar(num1 + '0');
						_putchar(num2 + '0');
						_putchar(':');
						_putchar(num3 + '0');
						_putchar (num4 + '0');
						_putchar('\n');
					}	
				}
			}
		}
	}
}
