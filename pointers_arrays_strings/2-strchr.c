#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to be search
* @c: character to serarch for
* Return: Pointer to the first occurence of c or NULL if not foud
*/
char *_strchr(char *s, char c)
{
	int a;

	while (*s >= '\0')
	{

		if (*s == c)
		{
			return(a);
		}

		if (*s == '\0')
		{
			break;
		}
		s++;
	}

	return (NULL);

}
