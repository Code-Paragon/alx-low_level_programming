#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
#include <errno.h>
/**
 * create_file - creates a file.
 * @text_content: the text content
 * @filename: filename
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_EXCL, 0600);
	if (fd == -1)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_RDWR);
			if (fd == -1)
				return (-1);
		}
		if (ftruncate(fd, 0) == -1)
			return (-1);
	}
	else
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytesWritten = write(fd, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
