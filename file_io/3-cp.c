#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/* Function prototypes */
int open_source(const char *filename);
int create_dest(const char *filename);
void handle_error(int code, const char *msg, int fd);
void copy_contents(int fd_from, int fd_to, const char *from, const char *to);

/**
 * main - entry point for file copy program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source(argv[1]);
	fd_to = create_dest(argv[2]);
	copy_contents(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}

/**
 * open_source - opens source file for reading
 * @filename: name of source file
 * Return: file descriptor
 */
int open_source(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * create_dest - creates destination file
 * @filename: name of destination file
 * Return: file descriptor
 */
int create_dest(const char *filename)
{
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_contents - copies contents from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @from: source filename (for error reporting)
 * @to: destination filename (for error reporting)
 */
void copy_contents(int fd_from, int fd_to, const char *from, const char *to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
}

/**
 * handle_error - handles errors with file descriptors
 * @code: exit code
 * @msg: error message format string (must contain %d for fd)
 * @fd: file descriptor value
 */
void handle_error(int code, const char *msg, int fd)
{
	dprintf(STDERR_FILENO, msg, fd);
	exit(code);
}
