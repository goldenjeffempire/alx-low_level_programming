#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The actual number of leters read and printed,
 *         Or, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *fbuf;

	if (!filename)
		return (0);

	fbuf = malloc(sizeof(char) * letters);
	if (!fbuf)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, fbuf, letters);
	fw = write(STDOUT_FILENO, fbuf, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(fbuf);
		return (0);
	}

	free(fbuf);
	close(fo);

	return (fw);
}
