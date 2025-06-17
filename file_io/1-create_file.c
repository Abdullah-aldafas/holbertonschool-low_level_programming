#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: An input pounter
 * @text_content: An input pounter
 * Return: creates a file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		n = write(fd, text_content, len);
		if (n == -1 || n != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
