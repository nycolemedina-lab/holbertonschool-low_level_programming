#include "function_pointers.h"
/**
* int_index - search for an integer in an array
* @array: array of integers
* @size: number of elements in the array
* @cmp: pointer to the function used to compare values
*
* Return: index of the first element for which cmp doesn't return 0
*	or -1 if no element matches, size <= 0, or array/cmp is NULL
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);

}
