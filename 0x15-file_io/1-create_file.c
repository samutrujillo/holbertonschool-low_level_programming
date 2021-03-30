#include "holberton.h"
/**
 * create_file - function
 * @filename: var
 * @text_content: var
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, WD_stat = NULL;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		WD_stat = write(fd, text_content, len);
		if (WD_stat == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
