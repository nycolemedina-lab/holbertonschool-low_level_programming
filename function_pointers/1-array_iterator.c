#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a finction given as a parameter
*		on each element of an array
* @array: targetet integer array
* @size: size of the array
* @action: pointer to the function to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
