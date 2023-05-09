#include "main.h"

/**
 * append_text_to_file - Function that appends to a file
 * @filename: File name
 * @text_content: Text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w = 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
	}

	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
