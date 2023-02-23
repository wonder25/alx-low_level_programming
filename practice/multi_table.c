#include <stdio.h>
/**
 * main - entry point.
 * Description: multiplication table for a given number.
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (m <= 10)
	{
		int ans = n * m;

		printf("%d * %d = %d\n", n, m, ans);
		m++;
	}
}
