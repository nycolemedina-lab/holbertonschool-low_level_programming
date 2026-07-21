#include "main.h"
/**
* print_triangle - prints a triangle follower by a new line
* @size: size of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
	int a, e, i;

	if (size > 0)
	{
	for (a = 0 ; a < size ; a++)
	{
		for (e = 0 ; e < size - a - 1 ; e++)
		{
			_putchar(' ');
		}
		for (i = 0 ; i <= a ; i++)
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

