#include "main.h"

/**
 * _strcat - concatinated the value of two integers.
 *
 * @dest: arg a
 *
 * @src: arg b
 *
 * @n: arg n
 *
 * Return: void.
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (Src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
