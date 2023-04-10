#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * close_ - close file
 * @fdf: file from
 * @fdt: file to
 * @message: message
 * @param: param
 * Return: EXIT_FAILURE
 */
int close_(int fdf, int fdt, const char *message, const char *param)
{
	dprintf(STDERR_FILENO, message, param);
	close(fdf);
	close(fdt);
	return (EXIT_FAILURE);
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (EXIT_FAILURE);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (EXIT_FAILURE);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			return (close_(fd_from, fd_to, "Error: Can't write to %s\n", argv[2]));
	}
	if (bytes_read == -1)
		return (close_(fd_from, fd_to, "Error: Can't read from file %s\n", argv[1]));
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
