#include "main.h"

/**
 * print_square - print a square to a given size.
 * @size: size square to print
 *
 */
void print_square(int size)
{
	int vert, horiz;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (vert = size ; vert > 0 ; vert--)
	{
		for (horiz = size ; horiz > 0 ; horiz--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
