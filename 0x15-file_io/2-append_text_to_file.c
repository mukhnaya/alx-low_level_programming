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
 * append_text_to_file - to append files
 * @filename: is the file name
 * @text_content: to append to the file
 * Return: text file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file;
	int write_file;
	int pau; /*check length of text to write */

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	pau = 0;
	while (text_content[pau] != '\0')
	{
		pau++;
	}
	write_file = write(open_file, text_content, pau);
	if (write_file == -1)
		return (-1);
	close(open_file);
	return (1);
}
