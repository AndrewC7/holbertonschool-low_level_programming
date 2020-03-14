#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed
 *
 * @separator: string of spaces
 *
 * @n: length of args being passed
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list args;

	va_start(args, n);


	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(args, const unsigned int));

		if (separator != NULL && counter != (n - 1))
			printf("%s", separator);
	}
	printf("\n");


	va_end(args);
}
