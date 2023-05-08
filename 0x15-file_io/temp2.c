#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_handler - Function that prints error messages and exits
 * with exit number
 *
 * @error: either the exit number or file descriptor
 * @str: pointer to name of file
 * @fd: file descriptor
 *
 * Return: Always 0 (SUCESS)
*/
int error_handler(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - create a copy of file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (SUCCESS).
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_handler(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handler(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		error_handler(99, argv[2], 0);

	while ((read_stat = read(file_from, buffer, BUFFER_SIZE)) != 0)
	{
		if (read_stat == -1)
			error_handler(98, argv[1], 0);

		write_stat = write(file_to, buffer, read_stat);
		if (write_stat == -1)
			error_handler(99, argv[2], 0);
	}

	close_in = close(file_from);
	if (close_in == -1)
		error_handler(100, NULL, file_from);

	close_out = close(file_to);
	if (close_out == -1)
		error_handler(100, NULL, file_to);

	return (0);
}
