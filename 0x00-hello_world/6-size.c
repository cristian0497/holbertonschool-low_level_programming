#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char _character;
int _integer;
long _long;
long long _longlong;
float _float;

printf("Size of a char: %lu byte(s)\n", sizeof(_character));
printf("Size of an int: %lu byte(s)\n", sizeof(_integer));
printf("Size of a long int: %lu byte(s)\n", sizeof(_long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(_longlong));
printf("Size of a float: %lu byte(s)\n", sizeof(_float));

return (0);
}
