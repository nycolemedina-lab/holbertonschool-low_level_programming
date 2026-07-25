#include "main.h"
/**
* _strcpy - copies the string in src whit the null, to dest
* @dest: pointer to the destination buffer
* @src: pointer to the source string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);

}
