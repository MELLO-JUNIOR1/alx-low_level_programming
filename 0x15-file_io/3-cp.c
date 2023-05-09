#include "main.h"

/**
 * error_handler - Function that handles errors
 * @src: file source descriptor
 * @dest: file destination descriptor
 * @argv: arguments
 */
void error_handler(int src, int dest, char *argv[]);

/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: arguments
 * Return: Return depending on the case 0 || err || 98
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, err;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(src_fd, dest_fd, argv);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			error_handler(-1, 0, argv);
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_handler(0, -1, argv);
	}

	err = close(src_fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	err = close(dest_fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}

/**
 * error_handler - Function that handles errors
 * @src: file source descriptor
 * @dest: file destination descriptor
 * @argv: arguments
 */
void error_handler(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
