#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: integers
 * @argv: element of string to be multiplied
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int c, b, mul;

	if (argc <= 2)
	{
		printf("Error \n");
		return (1);
	}

	c = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = c * b;
	printf("%d \n", mul);
	return (0);
}
