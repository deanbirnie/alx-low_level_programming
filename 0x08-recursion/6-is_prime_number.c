#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * otherwise, returns 0
 *
 * @n: the value to be tested for being prime.
 *
 * Return: true if the number is prime
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (_prime(n, i));
}

/**
 * _prime - checks if n is prime or not
 *
 * @n: value to be tested, passed to function
 * @i: value used for testing n
 *
 * Return: 1 if n is prime OR 0 if not
 */

int _prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}
