#include "holberton.h"
#define MAXSIZE 1024
/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to_cp, stat_rd, stat_wrt;
	char *buffer[MAXSIZE], *namef = argv[1], *namet = argv[2];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	fd_from = open(namef, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			namef), exit(98);
	fd_to_cp = open(namet, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_to_cp == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			namet), exit(99);
	stat_rd = 1;
	while (stat_rd)
	{
		stat_rd = read(fd_from, buffer, MAXSIZE);
		if (stat_rd == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", namef),
				exit(98);
		if (stat_rd > 0)
		{
			stat_wrt = write(fd_to_cp, buffer, stat_rd);
			if (stat_wrt != stat_rd || stat_wrt == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", namet),
					exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from),
			exit(100);
	if (close(fd_to_cp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_cp),
			exit(100);
	return (0);
}
