#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: string to be used
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int c;

	for (c = 1; c < argc; c++)
	{
		if (*argv[c] < '0' || *argv[c] > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[c]);
	}

	printf("%d\n", sum);
	return (0);
}
