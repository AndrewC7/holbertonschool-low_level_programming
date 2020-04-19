#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
int j;
int k;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{
	if (x <= j && y < k)
	{
		putchar(x);
		putchar(y);
		putchar(' ');
		putchar(j);
		putchar(k);

		if (!(x == '9' && y == '8' && j == '9' && k == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
