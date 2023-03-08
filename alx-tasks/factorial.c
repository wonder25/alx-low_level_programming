#include <stdio.h>

int main(void)
{
	/**
	 * Write C code here
	 * factorial of a number
	 */
	int n, i = 1;
	int factorial = 1;

	printf("Enter a positive number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		factorial = factorial * i;
		i++;
	}
	printf("The factorial of %d is %d \n", n, factorial);
	return (0);
}
