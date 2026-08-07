#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - return a pointer to a 2d array of integers
* @width: of the 2d array
* @height: heigth of the 2d array
*
* Return: pointer to 2d, or NULL on failure or invalid dimensions
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);


}
