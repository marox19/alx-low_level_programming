#include "main.h"
/**
  * free_grid - Entry point
  *@grid: integer
  *@height: integer
  *Return: ALways 0
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
