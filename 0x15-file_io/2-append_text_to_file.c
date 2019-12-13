#include "holberton.h"
/**
* append_text_to_file- append text at the end fo file
* @filename: name of the file to create
* @text_content: text to put in the file
* Return: 1 on succes, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND,  0600);
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;
	fd = write(fd, text_content, i);
	if (fd == -1)
		return (-1);
	return (1);
}
