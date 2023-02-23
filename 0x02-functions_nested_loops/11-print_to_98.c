#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * user inputs' number prints to 98 whether its <98 or >98
 * @n: user input
 * Return: 0 success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
