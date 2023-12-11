#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: ptr
 * @text_content: ptr
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int sz;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
		sz = 0;
	else
		sz = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);
	write(fd, text_content, sz);
	close(fd);
	return (1);
}
