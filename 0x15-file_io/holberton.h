#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <sys/types.h> /* OPEN */
#include <sys/stat.h> /* OPEN */
#include <fcntl.h> /* OPEN */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> /* WRITE */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
