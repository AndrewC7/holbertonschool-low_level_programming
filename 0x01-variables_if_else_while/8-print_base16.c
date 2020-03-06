#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
