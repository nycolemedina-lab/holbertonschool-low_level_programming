#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers
* @argc: number of command line arguments
* @argv: array of command line argument strings
*
* Return: 0 if successful, 1 if non dogit characters in found
*/
int main(int argc, char *argv[])
{
	int y, x;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for(y = 1; y < argc; y++)
	{
		for (x = 0; argv[y][x] != '\0'; x++)
		{
			if (argv[y][x] < '0' || argv[y][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[y]);
	}
	printf("%d\n", sum);
	return (0);
}
