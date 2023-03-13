#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: string to be used
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int c, b, sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b] != '\0'; b++)
		{
			if (argv[c][b] < '0' || argv[c][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[c]);
	}

	printf("%d\n", sum);

	return (0);
}
