#include <stdio.h>
/**
 * main - main function
 * 
 * Description: print function shows ascii value of the character the user inputs
 * 
 * Return: always 0 (success)
 */
int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	/* %d displays the integer value of a character
	   %c displays the actual character
	*/
	printf("ASCII value of %c = %d\n", c, c);

	return (0);
}
