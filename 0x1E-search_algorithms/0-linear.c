#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - search a value in given array
 * @array: Given array
 * @size: Lenght of array
 * @value: value to search in array
 * Return: The index when is found the match.
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	while (i <= (size - 1))
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			i++;
		}
	}
	return (-1);
}
