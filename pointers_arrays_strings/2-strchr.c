#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to be search
* @c: character to serarch for
* Return: Pointer to the first occurence of c or NULL if not foud
*/
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] >= '\0')
	{

		if (s[a] == c)
		{
			return(s + a);
		}

		if (s[a] == '\0')
		{
			break;
		}
		a++;
	}

	return (0);

}
