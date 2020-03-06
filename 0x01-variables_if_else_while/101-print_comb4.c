#include <stdio.h>

/**
  * main - entry
  * Return: 0
  */
int main(void)
{
	int num1, num2, num3;

	for (num3 = 0; num3 <= 9; num3++)
	{
		for (num2 = num3 + 1; num2 <= 9; num2++)
		{
			for (num1 = num2 + 1; num1 <= 9; num1++)
			{
				putchar(num3 + '0');
				putchar(num2 + '0');
				putchar(num1 + '0');

				if (num3 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
