#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concates two string up to n bytes of s2
* @s1: first string
* @s2: second string
* @n: maximum number of bytes of s2 to concatenate
*
* Return: pointer to newly allocated apace, NULL on faliure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *nconcat;

	unsigned int len1, len2, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;


	nconcat = malloc((len1 + n + 1) * sizeof(char));

	if (nconcat == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		nconcat[a] = s1[a];

	for (b = 0; b < n; b++, a++)
		nconcat[a] = s2[b];

	nconcat[a] = '\0';

	return (nconcat);

}
