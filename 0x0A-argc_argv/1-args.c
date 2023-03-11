#include <stdio.h>

/**
 * main - function that prints the number of arguments
 * @argc: number of arguments
 * @argv: array of string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		(void)argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
