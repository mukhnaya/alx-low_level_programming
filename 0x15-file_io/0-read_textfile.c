#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
/**
 * read_textfile - read textfile and print
 * @filename: textfile
 * @letters: number of characters to be printed
 * Return: the text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pau;
	ssize_t read_file;
	ssize_t write_file;
	ssize_t close_file;
	char *text_data;

	if (filename == NULL)
	{
		return (0);
	}
	text_data = malloc(sizeof(char) * letters);
	if (text_data == NULL)
	{
		return (-1);
	}
	pau = open(filename, O_RDONLY);
	if (pau == -1)
	{
		return (0);
	}
	read_file = read(pau, text_data, letters);
	if (read_file == -1)
	{
		return (-1);
	}
	write_file = write(STDOUT_FILENO, text_data, read_file);
	if (write_file == -1)
	{
		return (-1);
	}
	close_file = close(pau);
	if (close_file == -1)
	{
		return (-1);
	}
	return (read_file);
}
