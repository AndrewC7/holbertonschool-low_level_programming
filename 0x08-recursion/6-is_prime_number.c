#include "holberton.h"

/**
 * prime_check - checks if prime number
 *
 * @num: number to check
 * @x: 2
 *
 * Return: 1 if prime 2 if not
 */
int prime_check(int num, int x)
{
	if (num <= 1)
		return (0);

	if (num == 2)
		return (1);

	if (x * x > num)
		return (1);

	if (num % x == 0)
		return (0);

	return (prime_check(num, x + 1));
}

/**
 * is_prime_number - checks if prime number
 *
 * @n: number to check
 *
 * Return: is_prime function called recursivley
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
