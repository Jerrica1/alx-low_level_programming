#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when complete
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			if (i > 1)
			{
				printf(" ");
			}
			printf("%i", i);
		}
	}
	printf("\n");
	return (0);
}
