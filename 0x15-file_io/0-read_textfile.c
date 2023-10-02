#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 *	stdout
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: when filename is NULL, cant open and read and write fails.
 *	otherwise - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
