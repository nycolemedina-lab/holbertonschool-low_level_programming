#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse followed by a neew line
* @s: pointer to the string to be printed
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	char start = s[0];

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
