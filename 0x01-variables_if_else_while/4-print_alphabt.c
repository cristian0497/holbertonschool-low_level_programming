#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - alphabeth
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character;
for (character = 'a'; character <= 'd'; character++)
putchar (character);
for (character = 'f'; character <= 'p'; character++)
putchar (character);
for (character = 'r'; character <= 'z'; character++)
putchar (character);
putchar ('\n');
return (0);
}
