#include "main.h"
/**
* put_half - prtints the second half of a string, followed by a new line
* @str: pointer with the string
*
* Return: void
*/
void puts_half(char *str)
{
	int len = 0;
	int a;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (a = n ; a < len ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
