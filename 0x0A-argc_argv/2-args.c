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
	int n;

	for (n = 0; n < argc; ++n)
		printf("%s\n", argv[n]);

	return (0);
}
