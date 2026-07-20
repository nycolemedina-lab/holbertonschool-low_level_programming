#includ "main.h"
/**
* _isupper - Checks for upper character
* @c: The character to chack
*
* Return: 1 if c is uppercase, 0 otrerwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}
