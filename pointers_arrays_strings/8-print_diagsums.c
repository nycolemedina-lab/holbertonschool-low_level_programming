#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print the sum of two diagonal of a square of a matrix
* @a: pointer to array
* @size: size of the array
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int z;
	int sum1 = 0;
	int sum2 = 0;

	for (z = 0; z < size; z++)
	{
		sum += a[z * size + z];
		sum += a[z * size + (size - 1 - z)];
	}
	printf("%d, %d\n", sum1, sum2);

}
