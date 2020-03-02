#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of strings passed to program
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);
}
