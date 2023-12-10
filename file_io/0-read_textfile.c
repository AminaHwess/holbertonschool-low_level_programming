#include "main.h"

/**
 * read_textfile - check the code
 * @filename: ptr
 * @letters: nbr of letters
 * Return: sz.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char buff[50000];
	int fd, sz;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	sz = read(fd, buff, letters);
	write(1, buff, sz);

	close(fd);

	return (sz);
}
