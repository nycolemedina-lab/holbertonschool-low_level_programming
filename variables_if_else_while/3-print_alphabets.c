#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
{
	putchar(letter);
}
	char capletter;

	for (capletter = 'A' ; capletter <= 'Z' ; capletter++)
{
	putchar(capletter);
}
	putchar('\n');
	return (0);
}
