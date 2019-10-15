#include "holberton.h"


int long_s (char *string_cont)
{
	if (*string_cont == '\0')
		return (0);
	return (long_s(++string_cont + 1));
}
int retorno (char *s, int cont_del, int cont_rev)
{
	if ( s[cont_del] != s[cont_rev])
		return (0);
	else
		return (retorno (s, cont_del + 1, cont_rev - 1));
}

int is_palindrome(char *s)
{
	int large;
	large = long_s(s);

	if (large <= 1)
		return(0);
	return (retorno(s, 0, large));
}
