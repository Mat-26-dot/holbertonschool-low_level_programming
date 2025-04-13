#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add to the file
 *
 * Return: 1 on success, -1 on failure
 * - File is not created if it doesn't exist
 * - Returns -1 if filename is NULL
 * - Does nothing if text_content is NULL
 * - Returns 1 if file exists when text_content is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	/* Check if file exists and is writable */
	if (access(filename, F_OK | W_OK) == -1)
		return (-1);

	/* Nothing to append */
	if (text_content == NULL)
		return (1);

	/* Open file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		return (-1);

	/* Calculate length of text_content */
	while (text_content[length])
		length++;

	/* Write to file */
	write_status = write(fd, text_content, length);
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
		return (1);
}
