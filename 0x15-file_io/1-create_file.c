#include "main.h"
/**
 * _strlen - finds length of a string.
 * @s: pointer to the string.
 * Return: length of the string.
*/
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: name of file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 in failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
