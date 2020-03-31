#include "holberton.h"
/**
 *create_file - check the code for Holberton School students.
 *@filename: const char
 *@text_content: char
 * Return: int.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, wd;


	fd = open(filename, O_CREAT | O_TRUNC | _WRONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	i = 0;
	while (text_content[i])
	{
		i++;
	}
	wd = write(fd, text_content, i);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	return (1);
}
