#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{

	int cont = 1, mul3, mul5;

	while (cont <= 100)
	{
		mul3 = cont % 3;
		mul5 = cont % 5;

		if (mul3 != 0 && mul5 != 0)
		{
			printf ("%d ", cont);
		}
		else if (mul3 == 0 && mul5 != 0)
		{
			printf ("Fizz " );
		}
		else if (mul3 != 0 && mul5 == 0)
		{
			printf ("Buzz ");
		}
		else if (mul3 == 0 && mul5 == 0)
		{
			printf ("FizzBuzz ");
		}
		cont++;
	}
	putchar('\n');

return(1);
}
