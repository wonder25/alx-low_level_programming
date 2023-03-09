#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input is a prime numbers
 * @n: input number
 * Return: returns 1 if input is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int prime_num = 0;

	if (n < 2)
		prime_num = 0;
	else if (n == 2)
		prime_num = 1;
	else if (n % 2 == 1)
		prime_num = 1;
	return (prime_num);
}
