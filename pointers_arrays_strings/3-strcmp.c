#include "main.h"
/**
* _strcmp - compare two strings
* @s1: first string to compare
* @s2: second string to compare
*
* Return: difference between first non-matching characters, 0 if equal
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
