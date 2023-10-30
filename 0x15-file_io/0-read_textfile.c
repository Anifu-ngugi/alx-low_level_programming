#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int m, k;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	m = read(fd, buf, letters);
	if (m < 0)
	{
		free(buf);
		return (0);
	}
	buf[m] = '\0';
	close(fd);
	k = write(STDOUT_FILENO, buf, m);
	if (k < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (k);
}
