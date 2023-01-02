#incude "main.h"

/**
 * _memset - fills memory with a constant byte n amount of times
 *
 * @s: pointer that has the address of the memory to fill
 * @b: constant byte that will be written into the memory
 * @n: amount of times the byte will be written into the memory
 *
 * Return: address of the memory where thebyte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = n;
	}
	return (s);
}
