#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of
 * integers.
 * @width: columns.
 * @height: rows.
 *
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	arr[0] = (int *)malloc(sizeof(int) * width * height);
	if (arr[0] == NULL)
	{
		free(arr[0]);
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		arr[i] = (*arr + width * i);

	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			arr[r][c] = 0;

	return (arr);
}
