#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: seperator srting
 * @n: Number of input strings
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int counter;
	char *string;

	va_start(args, n);


	for (counter = 0; counter < n; counter++)
	{
		string = va_arg(args, char *);
		if (separator != NULL && counter != (n - 1))
		{
			if (args !=  NULL)
				printf("%s%s", string, separator);
			else
				printf("(nil)%s", separator);
		}

		else
		{
			if (string != NULL)
				printf("%s", string);
			else
				printf("(nil)");
		}
	}
	printf("\n");


	va_end(args);
}
