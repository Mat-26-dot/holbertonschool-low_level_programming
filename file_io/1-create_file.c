#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with specified permissions and writes content
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- (600) */

	if (filename == NULL)
		return (-1);

	/* Open file with O_CREAT | O_WRONLY | O_TRUNC flags */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd == -1)
	return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
	/* Calculate length of text_content */
	int length = 0;

	while (text_content[length] != '\0')
		length++;

	write_result = write(fd, text_content, length);
	if (write_result == -1)
	{
		close(fd);
		return (-1);
		}
	}

	close(fd);
		return (1);
}
