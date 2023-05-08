#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len_content, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len_content = strlen(text_content);
	bytes_written = write(fd, text_content, len_content);
	close(fd);

	if (bytes_written == -1 || bytes_written != len_content)
		return (-1);

	return (1);
}
