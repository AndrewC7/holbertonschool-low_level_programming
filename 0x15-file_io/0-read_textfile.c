#include "holberton.h"

/**
 * read_textfile - reads/prints text file to POSIX STDOUT
 *
 * @filename: text file to reed
 * @letters: # of letters in file
 *
 * Return: actual number of letters it could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedest, write_buff, read_buff;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	filedest = open(filename, O_RDONLY);
	if (filedest == -1)
		return (0);

	read_buff = read(filedest, buffer, letters);
	write_buff = write(STDOUT_FILENO, buffer, read_buff);
	free(buffer);

	if (write_buff == -1 || read_buff == -1)
		return (0);
	close(filedest);
	return (write_buff);
}
