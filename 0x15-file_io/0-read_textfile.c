#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read;
	size_t i = 0;
	char buf[2];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n_read = 0;
	while (letters > i && read(fd, buf, 1) > 0)
	{
		if (write(STDOUT_FILENO, buf, 1) != 1)
		{
			close(fd);
			return (0);
		}
		n_read++;
		i++;
	}
	close(fd);
	return (n_read);
}
