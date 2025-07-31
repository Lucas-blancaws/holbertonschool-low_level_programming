#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: file
* @letters: number of letter
* Return: returns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_written;

	buf = malloc(letters);
	if (buf == NULL)
	return (0);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	return (0);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written != bytes_read)
	return (0);

	free(buf);
	close(fd);
	return (bytes_written);
}

