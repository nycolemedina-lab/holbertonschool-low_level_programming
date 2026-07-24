#include "main.h"
/**
* puts2 - prints every other characte of a string, followed by a new line
* @str: pointer with the string
*
* Return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchat(*str);
		str++;
		str++;
	}
	_putchar('\n');

}
