#include "holberton.h"
/**
 * _isupper - check if letter is upper or lower
 *
 * @c: letter to be checked
 *
 * Return: 1 if upper 0 if not
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
