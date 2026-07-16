#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	char capletter;

	for (letter = 'a' ; letter <= 'z' ; letter++)

	for (capletter = 'A' ; capletter <= 'Z' ; capletter++)
{
	putchar(letter);
	putchar(capletter);
}
	putchar('\n');
	return (0);
}
