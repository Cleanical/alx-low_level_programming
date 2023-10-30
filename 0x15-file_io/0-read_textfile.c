#include "main.h"
/**
 * read_textfile - function that prints a text file to POSIX stdout
 * after reading it.
 * @filename: string pointer
 * @letters: number of letters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rdn, wrn;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	rdn = read(fd, buff, letters);
	wrn = write(STDOUT_FILENO, buff, rdn);

	close(fd);
	free(buff);

	return (wrn);
}
