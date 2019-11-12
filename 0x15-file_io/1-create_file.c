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
 * create_file - funtion that create a file
 * @filename: name of the file to create
 * @text_content: content to add at file
 * Return: 1 Succes, -1 error.
 */
int create_file(const char *filename, char *text_content)
{
	int ret_val, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';
	ret_val = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ret_val == -1)
		return (-1);
	len = _strlen(text_content);
	ret_val = write(ret_val, text_content, len);
	if (ret_val == -1)
		return (-1);
	return (close(ret_val) == -1 ? -1 : 1);

}
