#include "main.h"
/**
*
*
*
*
*
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
				fount = 1;
				break;
			}
		}
		if (found == 1)
		{
			count++
		}
		else
		{
			breack;
		}
	}
	return (count);

}
