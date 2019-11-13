#include <sys/types.h> /* OPEN */
#include <sys/stat.h> /* OPEN */
#include <fcntl.h> /* OPEN */
#include <stdlib.h> /* Malloc */
#include <stdio.h>
#include <unistd.h> /* WRITE */

/**
 * _strlen - string lenght
 * @s: string to count
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * main - funtion main
 * @ac: count of arguments
 * @av: arguments
 * Return: 0 Succes, exit with code 98, 99, 100
 */
int main(int ac, char **av)
{
	int  ret_val, rd, wr;
	int ret_val2, len;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "usage cp file_from file_to\n");
		exit(97);
	}
	ret_val = open(av[1], O_RDONLY); /* apertura archivo from */
	if (ret_val == -1)
	{
		dprintf(ret_val, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024); /* pendiente if buf == NULL */
	rd = read(ret_val, buf, 1024);
	if (!rd)
	{
		exit(99);
	}
	ret_val2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ret_val2 == -1)
	{
		dprintf(ret_val2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	len = _strlen(buf);
	wr = write(ret_val2, buf, len);
	if (wr == -1)
	{
		dprintf(ret_val2, "Error: Can't close fd %d\n", ret_val2);
		exit(100);
	}
	return (0);

}
