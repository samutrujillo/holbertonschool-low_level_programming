#include "holberton.h"
/**
 * append_text_to_file - function
 * @filename: var
 * @text_content: var
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, stat, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	while (text_content[count] != '\0')
		count++;
	stat = write(fd, text_content, count);
	if (stat == -1)
		return (-1);
	close(fd);
	return (1);

}
