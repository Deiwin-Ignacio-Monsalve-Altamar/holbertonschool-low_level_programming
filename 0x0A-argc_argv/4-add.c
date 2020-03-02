#include <stdio.h>
#include <stdlib.h>
/**
 *_isdigit - print caracter
 *
 * @c: the integer print
 *
 * Return: the variable digit
 */

int _isdigit(char *c)
{
	while (*c != '\0')
	{
		if (*c < 0 || *c > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);

}
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
	if (argc == 0)
	{
		printf("0\n");
	}
	for (x = 1; x < argc ; x++)
	{
		if (_isdigit(argv[x]))
			suma += atoi(argv[x]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);
	return (0);
}
