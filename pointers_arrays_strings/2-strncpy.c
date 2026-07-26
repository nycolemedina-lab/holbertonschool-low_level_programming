#include "main.h"
/**
* _strncpy - copies a tring up to n bytes
* @dest: destination buffer
* @src: src string
* @n: number of bytes to copy
*
* Return: pointer dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);

}
