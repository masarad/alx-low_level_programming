#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - Returns 1 if the integer is a prime number
 * @n: Number to evaluate
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recurses to find the prime number
 * @n: Number to evaluate
 * @i: Iterator
 * Return: 1 if n is a prime number, 0 if it is not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
