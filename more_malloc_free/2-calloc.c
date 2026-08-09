#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for any array using malloc
* @nmemb: number of elements
* @size: size of each element in bytes
*
* Return: pointer to allocated memory,
*	or NULL if nmemb/size is 0 or malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	unsigned int total, a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;


	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < total; a++)
	{
		ptr[a] = 0;
	}

	return (ptr);

}
