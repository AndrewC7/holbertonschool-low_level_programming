#include "holberton.h"
/**
  * create_file - function that creates a file
  * @filename: name of file
  * @text_content: terminated string
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int filedest, letters, write_buff;

	if (!filename)
		return (-1);

	filedest = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedest == -1)
		return (-1);

	if (!text_content)
	{
		close(filedest);
		return (1);
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
