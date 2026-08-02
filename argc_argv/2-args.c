#include <stdio.h>
/**
* main - prints all arguments it receives
* @argc: number of command line argument
* @argv: array of command line arguments strings
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; 1 < argc; i++)
	{
		printf("%c\n", argv[1]);
	}
	return (0);
}
