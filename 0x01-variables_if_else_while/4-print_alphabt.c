#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if ((m == 'q' || m == 'e') != 1)
		{
			putchar(m);
		}

	}
	putchar('\n');
	return (0);
}
