#include "holberton.h"

/**
 * _sqrt_recursion - gets square root of input
 *
 * @n: num to evaluate
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (n);
	return (square_root(n, 1));
}

/**
 * square_root - Finds square root of a number
 *
 * @x: number
 * @y: number to check
 *
 * Return: square root
 */
int square_root(int x, int y)
{
	if (y * y > x)
		return (-1);

	if (y * y == x)
		return (y);
	else
		return (square_root(x, y + 1));
}
