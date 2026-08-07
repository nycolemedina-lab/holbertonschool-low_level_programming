#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* strdup - return a pointer to a newly allocates space in memory,
*		which contains a copy of the string given as a parameter
* @str: tring to duplicate
*
* Return: pointer tho duplicated string, NULL if tring is NULL
*	or if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *newstr;
	unsigned int a = 0, b;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[a] != '\0')
	{
		a++;
	}

	newstr = malloc(sizeof(char) * (a + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		newstr[b] = str[b];
	}

	return (newstr);

}
