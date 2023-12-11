#include "main.h"

/**
 * create_file - check the code
 * @filename: ptr
 * @text_content: ptr
 * Return: 1.
 */

int create_file(const char *filename, char *text_content)
{

	int fd, sz;

	if (!filename)
	{
		return (-1);
	}

	if (text_content == NULL)

	{
		sz = 0;
	}

	else

	{
		sz = strlen(text_content);
	}

	fd = open(filename, O_RDWR || O_CREAT || O_TRUNC);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, sz);

	close(fd);
	return (1);
}
