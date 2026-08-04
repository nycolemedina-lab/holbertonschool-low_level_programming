#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of char, and initialize it whith a specific char
* @size: bytes to be allocated
* @c: characters to initialiezs with
*
* Return: pointer to array, null if size is 0
*/

char *create_array(unsigned int size, char c)
{
	int a;
	int *arr;

	if (size <= 0)
	{
		return (0);
	}

	arr = malloc(sizeof(char) * size);

	for (a = 0; a <+ size; a++)
	{
		arr[a] = c[a];
	}

	return (arr);


}
