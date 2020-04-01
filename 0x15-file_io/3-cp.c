#include "holberton.h"
void _close(int file1, int file2, char *s, char *p);
void copy(int file1, int file2, char *s, char *p);
/**
 *main - adding or coping file a to file
 *@argc: const char
 *@argv: files
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file1, file2;
	char *s = argv[1], *p = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(97);
	}
	file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[2]);
		exit(98);
	}
	copy(file1, file2, s, p);
	return (0);
}
/**
 *copy - adding or coping file1 a to file2
 *@file1: const char
 *@file2: files
 *@s: pointer
 *@p: pointer
 * Return: 0
 */
void copy(int file1, int file2, char *s, char *p)
{
	int rd, wr;
	char buffer[1024];

	do {
		rd = read(file1, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", s);
			exit(98);
		}
		wr = write(file2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", p);
			exit(99);
		}
	} while (file1 == 1024);
	_close(file1, file2, s, p);
}
/**
 *close - adding or coping file1 a to file2
 *@file1: const char
 *@file2: files
 * Return: 0
 */
void _close(int file1, int file2, char *s, char *p)
{
	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", s);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", p);
		exit(100);
	}
}