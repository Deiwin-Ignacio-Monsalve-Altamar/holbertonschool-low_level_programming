#ifndef HOLBERTON
#define HOLBERTON
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/*  function that reads a text file and prints it to the POSIX */
ssize_t read_textfile(const char *filename, size_t letters);

/* Create a function that creates a file.*/
int create_file(const char *filename, char *text_content);

/* function that appends text at the end of a file.*/
int append_text_to_file(const char *filename, char *text_content);

 /* program that copies the content of a file to another file.*/
#endif
