#include <sys/types.h> /* OPEN */
#include <sys/stat.h> /* OPEN */
#include <fcntl.h> /* OPEN */
#include <stdlib.h> /* Malloc */
#include <stdio.h>
#include <unistd.h> /* WRITE */

/**
 * main - funtion main
 * @ac: count of arguments
 * @av: arguments
 * Return: 0 Succes, exit with code 98, 99, 100
 */
int main(int ac, char **av)
{
	int  ret_val, rd, wr, close_to, close_from;
	int ret_val2;
	char *buf[1024], *file_from, *file_to;

	file_from = av[1];
	file_to = av[2];
	if (ac != 3)
		dprintf(2, "usage cp file_from file_to\n"), exit(97);
	ret_val = open(file_from, O_RDONLY); /* apertura archivo from */
	if (ret_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ret_val2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ret_val2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	while ((rd = read(ret_val, buf, 1024)) > 0)
	{
		wr = write(ret_val2, buf, rd);
		if (wr != rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_from = close(ret_val);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ret_val), exit(100);
	close_to = close(ret_val2);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ret_val2), exit(100);
	return (0);
}
