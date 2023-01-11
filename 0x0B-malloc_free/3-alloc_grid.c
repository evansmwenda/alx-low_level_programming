#include <stdlib.h>
#include "main.h"

/**
* alloc_grid-returns a pointer to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
* Return: int pointer
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
}
