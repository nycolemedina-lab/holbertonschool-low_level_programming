#include "main.h"
/**
* print_square - prints a square followed by a new line
* @size: size if the square
*
* Return: void
*/
void print_square(int size)
{
	int a, e;

	if (size > 0)
{
	for (a = 0 ; a < size ; a++)
{
	for (e = 0 ; e < size ; e++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
