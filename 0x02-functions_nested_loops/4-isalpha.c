#include "holberton.h"

/**
 * _isalpha - checks if letter or not
 *
 * @c: input from user
 *
 * Return: 0 for not letter, 1 for letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
