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
	int x, y;

	y = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (x = 1; argv[x]; x++)
	{
		if (!isdigit(*(argv[x])))
		{
			printf("Error\n");
			return (1);
		}
		else
			y = y + atoi(argv[x]);
	}
	printf("%d\n", y);
	return (0);
}
