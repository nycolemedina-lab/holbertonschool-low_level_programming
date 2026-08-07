#include "main.h"
#include <stdlib.h>
/**
* free_ grid - free a 2d grid previosly created by alloc_grid
* @grid: ad array of integers to free
* @heigth: height of the grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || heigth)
		return;

	for (a = 0; a < heigth; a++)
	{
		free(grid[a]);
	}
	free(grid);



}
