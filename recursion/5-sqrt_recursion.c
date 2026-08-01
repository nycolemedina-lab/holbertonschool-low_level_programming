#include "main.h"

int find_sqrt(int n, int i);

/**
* _sqrt_recursion - return the natural square root of a number
* @n: number to find the square root of
*
* Return: natural square root, -1 if n does not have one
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}

/**
* find_sqrt - helper function to recursively find the square root
* @n: target number
* @i: current number root to test
*
* Return: i if square root found, -1 if no natural root exists
*/
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqrt(n, i + 1));

}
