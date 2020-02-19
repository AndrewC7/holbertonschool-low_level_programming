#include "holberton.h"
/**
 * rev_string - reverses string
 *
 * @s: string
 *
 * Return: nothing.
 */

void rev_string(char *s)
{

	int i, length = -1;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; i <= length; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		count--;
	}

}
