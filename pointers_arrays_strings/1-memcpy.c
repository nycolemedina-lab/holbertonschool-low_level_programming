#include "main.h"
/**
* _memcpy - copy n bytes from src to dest
* @dest: destination of the copy
* @src: source of the copy
* @n: number of bytes to copy from src
*
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);

}
