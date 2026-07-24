#include "main.h"
/**
* rev_string - Reverses a string
* @s: pointer whith the string
*
* Returns: void
*/
void rev_string(char *s)
{
	int len = 0;
	int a, z;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (a = 0,  b = len - 1 ; a < z ; a++, z--)
	{
		tmp = s[a];
		s[a] = s[z];
		s[z] = tmp;
	}

}
