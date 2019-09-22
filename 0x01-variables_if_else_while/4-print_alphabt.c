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
character = 'a';
while (character <= 'z')
{
character == 'e' || character == 'q' ? character++ : character;
putchar(character);
character++;
}
putchar('\n');
return (0);
}
