#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string to check
* @accept: prefix substring
*
* Return: the number of bytes id s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int a, b;
	int found;

	for (a = 0; s[a] != '\0'; a++)
	{
		found = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);

}
