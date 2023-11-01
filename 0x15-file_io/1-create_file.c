#include "main.h"
/**
 * create_file - create and write into a file and copy its content
 * @filename: the filename to be created
 * @text_content: is the content to be copied into the file
 * Return: if it fails, return -1 or return 1 if sucessftul
 */
int create_file(const char *filename, char *text_content)
{
	int nletters;
	int rwr;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
