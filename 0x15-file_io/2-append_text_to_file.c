#include "holberton.h"
/**
 *append_text_to_file - check the code for Holberton School students.
 *@filename: const char
 *@text_content: char
 * Return: int.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wd;


	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	wd = write(fd, text_content, i);
	if (wd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
