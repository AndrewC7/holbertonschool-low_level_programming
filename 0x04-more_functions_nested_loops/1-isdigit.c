#include "holberton.h"
/**
 *_isdigit - Check if input is digit or not
 *
 * @c: digit to check
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
