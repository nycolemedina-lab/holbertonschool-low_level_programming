#include "main.h"
/**
* _strncat - concatenates two strings using at most n bytes form src
* @dest: destination strin
* @src: sorce string
* @n: maximum number of bytes to copy from src
*
* Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int a = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (a < n  && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		a++;
	}
	*dest = '\0';

	return (temp);
}
