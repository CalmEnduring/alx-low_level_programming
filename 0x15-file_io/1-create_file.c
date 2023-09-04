#include "holberton.h"

/**
  * create_file - creates a file
  * @filename: name of file to create
  * @text_content: terminated string file contents
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, c = 0;

	if (!filename)
		return (-1);

	while (text_content[c])
		text_content++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, c);

	close(fd);
	return (1);
}
