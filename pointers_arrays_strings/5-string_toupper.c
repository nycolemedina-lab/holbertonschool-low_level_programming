#include "main.h"
/**
* string_toupper - changes all lowecase letters of a tring to uppercase
* @str: tring to modify
*
* Return: pointer to the modified string
*/
char *string_toupper(char *)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
