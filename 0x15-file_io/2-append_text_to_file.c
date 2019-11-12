#include "holberton.h"

/**
 * _strlen - funtion that count num of chars
 * @s: string to count
 * Return: lengh of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - funtion that appende text_content in a file
 * @filename: name ofthe file to append
 * @text_content: text to append to file
 * Return: 1 succes, -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ret_val, w, len;

	if (filename == NULL)
		return (-1);
	ret_val = open(filename, O_RDWR | O_APPEND);
	if (ret_val == -1)
		return (-1);
	if (!text_content)
		return (close(ret_val) == -1 ? -1 : 1);
	len = _strlen(text_content);
	w = write(ret_val, text_content, len);
	if (w == -1)
		return (-1);
	return (1);

}
