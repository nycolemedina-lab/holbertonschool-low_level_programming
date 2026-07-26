#include "main.h"
/**
*
*
*
*
*
*
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}

	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
