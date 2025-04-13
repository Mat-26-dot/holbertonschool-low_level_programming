#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 * - Does not create file if it doesn't exist.
 * - Returns -1 if filename is NULL.
 * - If text_content is NULL, returns 1 if file exists, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	ssize_t len = 0;

	if (filename == NULL)
	return (-1);

	/* Check if file exists and is writable */
	if (access(filename, F_OK | W_OK) == -1)
	return (-1);

	/* Early return if nothing to append */
	if (text_content == NULL)
	return (1);

	/* Open in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	/* Calculate string length */
	while (text_content[len] != '\0')
	len++;

	/* Write to file */
	write_result = write(fd, text_content, len);
	if (write_result == -1 || write_result != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
