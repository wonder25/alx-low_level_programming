#include <stdio.h>
/**
 * main - prints the fibonacci series of nth terms.
 * @n1: first number
 * @n2: second number
 * @n: nth term
 * nxtnum: next number on the series
 */

int main(void)
{
	unsigned long int n1, n2, n, nxtnum, i;

	n1 = 0;
	n2 = 1;

	printf("Enter the number of terms: ");
	scanf("%lu", &n);

	for (i = 3; i <= n; ++i)
	{
		printf("%lu, ", nxtnum);
		n1 = n2;
		n2 = nxtnum;
		nxtnum = n1 + n2;
	}
	printf("\n");
	return (0);
}		
