#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of char, initialize whith a specific char
* @size: bytes to be allocated
* @c: characters to initialiezs with
*
* Return: pointer to array, null if size is 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}

	return (arr);


}
