#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	int printf(..."%d is positive");
}
	else if (n == 0)
{
	int printf(..."%d is zero");
}
	else
{
	int printf(..."%d is negative");
}
	return (0);
}
