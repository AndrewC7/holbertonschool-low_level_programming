#include<stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');

		}
		num++;
	}
	putchar('\n');
	return (0);
}
