#include "main.h"
/**
* print_rev - prints the string in reverce
* @s: pointer with the strind
*
* Return: void
*/
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a = a -1 ; a >=0 ; a--)
	{
		_putchar(a);
	}
	_putchar('\n');
}
