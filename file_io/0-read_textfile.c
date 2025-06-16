#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: An input pounter
 * @letters: An input pounter
 * Return: reads a text file and prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, h;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open (filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	h = read(fd, buffer, letters);

	if (h == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n = write(STDOUT_FILENO, buffer, h);

	if (n == -1 || n != h)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n);
}
