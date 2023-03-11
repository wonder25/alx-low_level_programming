#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c;
	printf("%s\n", argv[0]);

	if (argc > 2)
	{
		for (c = 1; c < argc; c++)
		{
			printf("%s \n", argv[c]);
		}
		printf("The command has zero arguments. \n");
	}
	return (0);
}
