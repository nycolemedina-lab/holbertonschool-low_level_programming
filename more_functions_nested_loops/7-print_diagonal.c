#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: The number of times to print '\'
*
* Return: void
*/
void print_diagonal(int n)
{
	int a;

	int e;

	if (n > 0)
{
	for (a = 0 ; a < n ; a++)
{
	for (e = 0 ; e < a ; e++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
