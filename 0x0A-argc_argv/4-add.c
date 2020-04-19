#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!(argv[x][y] >= '0' && argv[x][y] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
