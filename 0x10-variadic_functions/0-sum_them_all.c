#include "variadic_functions.h"

/**
 * sum_them_all - adds all paramaters
 *
 * @n: length of arg list
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum;
	va_list args;

	sum = 0;
	va_start(args, n);


	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		sum = sum +  va_arg(args, int);


	va_end(args);
	return (sum);
}
