#include "main.h"

int check_prime(int n, int i);

/**
* is_prime_number - checks if an integer is a prime number
* @n: number to evaluate
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
* check_prime - helper finction to recursively check for divisors
* @n: target number to evaluate
* @i: current divisor to tast
*
* Return: 1 if prime, 0 if divisible by i
*/
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
