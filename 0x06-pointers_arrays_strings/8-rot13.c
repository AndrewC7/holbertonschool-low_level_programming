#include "holberton.h"
/**
 * rot13 - encodes string using rot13
 *
 * @s: string to be encoded
 *
 * Return: coded string
 */

char *rot13(char *s)
{
	int i, x;
	char message[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (x = 0; message[x] != '\0'; x++)
		{
			if (s[i] == message[x])
			{
				s[i] = code[x];
				break;
			}
		}
	return (s);
}
