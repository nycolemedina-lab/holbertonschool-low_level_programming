#include "main.h"
/**
* _strpbrk - seaches a string for any of a se of bytes
* @s: the string to be searchd
* @acces: the set of bytes to be seached for
*
* Return: a point to bytes in s that matches one of the byte in accept,
*	or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
	{

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c = s[a];
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (c);
}
