#include "main.h"
/**
* print_numbers - Prints the numbers from zero to nine followed by a new line
*
* Return: void
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
{
	_putchar(i + '0');
	i++;
}
	_putchar('\n');
}
