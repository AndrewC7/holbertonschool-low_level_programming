#include "holberton.h"

/**
 * _islower - checks if uppercase or lowercase
 *
 * @c: - input passed
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
