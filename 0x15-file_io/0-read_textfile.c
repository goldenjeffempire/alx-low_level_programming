#include "main.h"

/**
  * read_textfile - Read a text file and print it out
  * @filename: The name of the file to read
  * @letters: The number of letters to read and print
  * Return: The actual number of letters and read printed,
  *        or 0 on failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == 1)
		return (0);

	char buffer[letters];
	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
