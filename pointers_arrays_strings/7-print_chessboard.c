#include "main.h"
#include <stdio.h>
/**
* print_chessboard - print the chessboard
* @a: pointer to an array of 8 characters
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int g, b;

	for (g = 0; g < 8; g++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[g][b]);
		}
		_putchar('\0');
	}

}
