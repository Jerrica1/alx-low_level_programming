#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * 0/w - the actual number of bytes the funcion can read and print.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = mallocO(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, 0_RDONLY);
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
