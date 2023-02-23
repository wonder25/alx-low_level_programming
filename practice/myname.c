#include <stdio.h>
/**
 * main - entry point
 * myname - function that prints out the char s
 * Description: char s holds a string value.
 * Return: always 0 (success)
 */
void myname(char *s);
int main(void)
{
	char s[] = "_putchar";

	myname(s);
	putchar('\n');
	return (0);
}
void myname(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
