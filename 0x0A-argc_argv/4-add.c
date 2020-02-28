#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints character
* @argc: print
* @argv: positions
*
* Return: 0
 */
int main(int argc, char *argv[])
{
	int i, suma = 0;
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && !(argv[i] <= 'a' && argv[i] >= 'z'))
		{
			suma = suma + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);
	return (0);
}
