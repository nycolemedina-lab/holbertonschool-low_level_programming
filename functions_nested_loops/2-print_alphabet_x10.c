#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times in lowercase
* Return: void
*/

void print_alphabet_x10(void)
{
	int alp, lap;

	for (lap = 0 ; lap <= 9 ; lap++)
{
	for (alp = 'a' ; alp <= 'z' ; alp++)
{
	_putchar(alp);
}
	_putchar('\n');
}
}
