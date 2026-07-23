#include "main.h"
/**
* swap_int - swaps the value of two integers
* @a: int to check
* @b: int to chec
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int set = *a;

	*a = *b;

	*b = set;

}
