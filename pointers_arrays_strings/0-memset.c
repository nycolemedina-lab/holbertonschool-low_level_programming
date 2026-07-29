#include "main.h"
/**
* _memset - fills the first n byte of the memory area pointed by with the costant byte b
* @s: memory area to filled
* @b: byte to fill with
* @n: number of byte to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}
	return (0);

}
