#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *		prints it to the POSIX standard output
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *	otherwise - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	o = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(o);
	return (w);

}
