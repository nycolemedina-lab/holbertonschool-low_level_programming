#include "main.h"
/**
* _atoi - convert a sting to an integer, taking into account if its + or -
* @s: the string to be converted
*
* Return: the integer value
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-' && !started)
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = (num * 10) + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
