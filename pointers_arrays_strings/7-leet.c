#include "main.h"
/**
* leet - encode a string into 1337
* @s: string to encode
*
* Return: pointer to the encoded string
*/
char *leet(char *s)
{
	int a = 0;
	int b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (s[a] != '\0')
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] s2[b];
				break;
			}
		}
		a++;
	}
	return (s);

}
