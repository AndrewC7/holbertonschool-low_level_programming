#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that finds change
 *
 * @argc: argument count
 * @argv: args vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int x, num, cents = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

		for (x = 0; x < 5; x++)
		{
			if (num / coin[x] > 0)
			{
				cents += num / coin[x];
				num = num % coin[x];
			}
		}
		printf("%d\n", cents);
	return (0);
}
