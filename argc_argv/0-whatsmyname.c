#include "main.h"
#include <stdio.h>
/**
* main - print the name of the progran
* @argc: the number of command line arguments
* @argv: array containing the command line arguments
* 
* Return - 0 if success
*/
int main(int argc, char* argv[])
{
	(void)argc;

	if (argv[0])
	{
		printf(%s\n, argv[0]);
	}

	return (0);
}
