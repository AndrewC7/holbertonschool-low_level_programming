#include "holberton.h"

/**
 * append_text_to_file - append text to end of a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: On success 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedest, letters, write_buff;

	if (!filename)
		return (-1);

	filedest = open(filename, O_APPEND | O_RDWR);

	if (filedest == -1)
		return (-1);

	if (!text_content)
	{
		return (1);
		close(filedest);
	}

	letters = _strlen(text_content);
	write_buff = write(filedest, text_content, letters);
	close(filedest);

	if (write_buff < letters)
		return (-1);

	return (1);
}


/**
 * _strlen - returns string length
 *
 * @str: string
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	return (x);
}
