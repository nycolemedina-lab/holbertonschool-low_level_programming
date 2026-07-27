#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: thring to modify
*
* Return: pointer to the modified string
*/
char *cap_string(char *s)
{
	int len = 0;
	int a;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[len] != '\0')
	{

		if (s[len] >= 'a' && s[len] <= 'z')
		{
			if (len == 0)
			{
				s[len] -= 32;
			}
			else
			{
				for (a = 0 ; sep[a] != '\0' ; a++)
				{
					if (s[len - 1] == sep[a])
					{
						s[len] -= 32;
						break;
					}
				}
			}
		}
		len++;
	}
	return (s);
}
