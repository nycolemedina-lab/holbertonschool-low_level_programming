#include "main.h"
#include <stdlib.h>
/**
* array_rage - creates an array if integers from min to max
* @min: starting integer (included)
* @max: ending integer (included
*
* Return: pointer to the newly created array,
*	or NULL on faliure/invalid range
*/
int *array_range(int min, int max)
{
	int *ptr;
	int total, a;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;

	ptr = malloc(total * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < total; a++)
	{
		ptr[a] = min;
		min++;
	}

	return (ptr);
}
