#include <stdio.h>

/**
 * main - prints numbers from 1-100
 * 3 multiples print fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", b);
		else if (a % 3 == 0)
			printf("%s ", f);
		else if (a % 5 == 0)
			printf("%s ", b);
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s ", fb);
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
