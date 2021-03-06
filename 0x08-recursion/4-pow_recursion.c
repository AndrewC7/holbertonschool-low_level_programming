#include "holberton.h"

/**
 * _pow_recursion - raises x to power of y
 *
 * @x: number to multiply
 * @y: number to multiply by
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
