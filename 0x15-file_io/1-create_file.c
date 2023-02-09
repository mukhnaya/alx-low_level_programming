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
 * int create_file - creates a file
 * @filename: is the file name
 * @text_content: text to write to file
 * Return: created file with content
 */
int create_file(const char *filename, char *text_content)
{
	int pau;
	int mos;
	int jul;

	pau = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (pau == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	mos = 0;
	while (text_content[mos] != '\0')
	{
		mos++;
	}
	jul = write(pau, text_content, mos);
	if (jul == -1)
	{
		return (-1);
	}
	close(pau);
	return (1);
}
