#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, j, m, len;

	m = 0;
	len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[m] = av[i][j];
			m++;
		}
		if (s[m] == '\0')
			s[m++] = '\n';
	}
	return (s);
}
