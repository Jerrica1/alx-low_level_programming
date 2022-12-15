#include "main.h"

/**
 * print_triangle - draws a right triangle with hypotenuse to the left
 *
 * @size: determines both base and height, in rows/columns drawn with '#' tiles
 *
 * Return: none
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				if ((row + col) < (size - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
