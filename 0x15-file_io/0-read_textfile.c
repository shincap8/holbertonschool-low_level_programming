#include "holberton.h"
/**
* read_textfile- read a text and prints it to POSIX
* @filename: name of the file to read;
* @letters: number of letters to read and print
* Return: the number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t characters;
	ssize_t fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	characters = read(fd, buf, letters);
	buf[letters] = '\0';
	if (characters == -1)
		return (0);
	characters = write(1, buf, characters);
	if (characters == -1)
		return (0);
	fd = close(fd);
	free(buf);
	return (characters);
}
