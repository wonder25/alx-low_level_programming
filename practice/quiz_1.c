#include <stdio.h>
/**
 * main - entry point
 * Description: checks whether a number is positive or negative or zero.
 * Return: always 0 (success)
 */
int main(void)
{
	double n;

	printf("Enter a number: ");
	scanf("%lf\n", &n);
	if (n > 0)
	{
		printf("%lf is a positive number\n", n);
	}
	else if (n < 0)
	{
		printf("%lf is a negative number\n", n);
	}
	else
	{
		printf("%lf is zero\n", n);
	}
	return (0);
}
