#include "main.h"
/**
* _strpbrk - seaches a string for any of a se of bytes
* @s: the string to be search
* @acces: set of bytes to match
*
* Return: pointer to the matching bytes, or 0 if not found 
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}

		}
	}
	return (0);
}
