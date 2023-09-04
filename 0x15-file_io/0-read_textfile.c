#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed or,
 * 0 on failure of opening file,
 * 0 if filename is NULL and,
 * 0 when write fails or doesnt print the expected amount
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fd);
	return (rd);
}
