#include "main.h"
/**
* string_toupper - changes all lowecase letters of a tring to uppercase
* @str: tring to modify
*
* Return: pointer to the modified string
*/
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 'a' + 'A';
		}
		a++;
	}
	return (str);
}
