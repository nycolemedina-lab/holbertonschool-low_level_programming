#include "main.h"
/**
* _strstr - seach a string for the number if bytes in the second string
* @haystack: string to serch in
* @needle: string to serch for
*
* Return: pointer to the beginning of the located substring, null if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
	}

	if (needle[b] == '\0')
	{
		return (haystack + a);
	}
	return (0);

}
