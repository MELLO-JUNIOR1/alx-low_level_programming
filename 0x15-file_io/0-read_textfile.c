#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX output
 * @filename: the file name to read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
ssize_t num_read, num_written;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(buf);
return (0);
}

num_read = read(file_descriptor, buf, letters);
if (num_read == -1)
{
free(buf);
close(file_descriptor);
return (0);
}

num_written = write(STDOUT_FILENO, buf, num_read);
if (num_written == -1 || num_read != num_written)
{
free(buf);
close(file_descriptor);
return (0);
}

free(buf);
close(file_descriptor);

return (num_written);
}
