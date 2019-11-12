#include "holberton.h"
/**
 * _strlen - count of len of string
 * @s: pointer string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * read_textfile - funtion that read a file specified
 * @filename: pointer to the naim of file
 * @letters: cant of letters to print
 * Return: num of letters impresed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret_val;
	char *buf;
	int r, x;

		x = open(filename, O_RDONLY);
		if (x == -1)
			return (0);

		buf = malloc(sizeof(char) * letters);
		if (!buf)
		{
			free(buf);
			return (0);
		}
		r = read(x, buf, letters);
		if (r == -1)
			return (0);

		ret_val = _strlen(buf);
		ret_val = write(STDOUT_FILENO, buf, ret_val);
		if (ret_val == -1)
		{
			free(buf);
			return (0);
		}
		free(buf);
		return (close(x) == -1 ? -1 : ret_val);
}
