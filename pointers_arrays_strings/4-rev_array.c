#include "main.h"
/**
* reverse_array - reverse an array of integers
* @a: pointer to the array of integers
* @n: number of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n -1;
	int set;

	while (start < end)
	{
		set = a[start];
		a[start] = a[end];
		a[end] = set;
		start++;
		end++;
	}
}
