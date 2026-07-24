#include "main.h"
/**
* print_rev - prints the string in reverce
* @s: pointer with the strind
*
* Return: void
*/
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	{
	while (*s < '\0')
	{
		_putchar(s);
		s--;
	}
	_putchar('\n');
}
