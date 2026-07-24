#include "main.h"
/**
* put_half - prtints the second half of a string, followed by a new line
* @str: pointer with the string
*
* Return: void
*/
void puts_half(char *str)
{
	int len;
	int a;
	int n;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	int half = len / 2;

	if (len % 2 = 0)
	{
		for (a = half ; a != '\0' ; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		n = (len + 1) / 2;

		for (a = n ; a != '\0' ; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
