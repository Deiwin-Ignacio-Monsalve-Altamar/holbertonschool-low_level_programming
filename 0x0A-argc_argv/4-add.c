#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum 2 number
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, suma;

	suma = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
	for (x = 1; argv[x]; x++)
	{
		if (!isdigit(*(argv[x])))
		{
			printf("Error\n");
			return (1);
		}
		else
			suma += atoi(argv[x]);
	}
	printf("%d\n", suma);
	}
	return (0);
}
