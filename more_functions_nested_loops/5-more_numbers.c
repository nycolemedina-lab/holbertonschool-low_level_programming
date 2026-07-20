#include "main.h"
/**
* more_numbers - Prints the numbers zero to fourteen ten times
* followed by a new line
*
* Return: void
*/
void more_numbers(void)
{
	int i, e;

	for (i = 0 ; i <= 9 ; i++)
{
	for (e = 0 ; e <= 14 ; e++)
{
	if (e > 9)
{
	_putchar((e / 10) + '0');
}
	_putchar((e % 10) + '0');
}
	_putchar('\n');
}
}
