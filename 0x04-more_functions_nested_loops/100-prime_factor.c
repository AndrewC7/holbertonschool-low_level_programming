#include <stdio.h>

/**
 * main - returns LPF of num
 *
 * Return: 0
 */

int main(void)
{
	int x;
	long num = 612852475143;

	for (x = 2; x <= num; x++)
	{
		if (num % x == 0)
		{
			num = num / x;
			x--;
		}
	}
	printf("%d\n", x);
	return (0);
}
