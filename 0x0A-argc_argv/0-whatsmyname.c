#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints it's name
 * @argc: number of arguments
 * @argv: pointer to string
 * Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
