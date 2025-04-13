#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 * - Does not create file if it doesn't exist.
 * - Returns -1 if filename is NULL.
 * - If text_content is NULL, returns 1 if file exists, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_status;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	/* Check if file exists by trying to open in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (-1); /* File doesn't exist or no permissions */
	close(fd);

	/* Early return if nothing to append */
	if (text_content == NULL)
	return (1);

	/* Open in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	/* Calculate length of text_content */
	while (text_content[len])
	len++;

	/* Write content to file */
	write_status = write(fd, text_content, len);
	if (write_status == -1 || (size_t)write_status != len)
	{
	close(fd);
	return (-1);
	}

		close(fd);
		return (1);
}
