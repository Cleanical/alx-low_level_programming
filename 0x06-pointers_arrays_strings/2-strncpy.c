#include "main.h"
/**
 * _strncpy - main function to copy strings
 * @dest: destination file
 * @src: source file
 * @n: output file
 * Return: void
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);

}
