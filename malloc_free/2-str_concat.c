#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
* str_concat - cancatenate two stings
* @s1: frirst string
* @str2: second string
*
* Return: pointer to newly allocated space whith cancatenated strin,
*	or NULL pn failure
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NUL)
		s2 ="";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (lan2 = 0; s2[len2] != '\0'; len2++)
		;

	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		cancat[a] = s1[a];

	for (b = 0; b < len2; b++, a++)
		cancat[a] = s2[b];

	concat[a] = '\0';

	return (concat);

}
