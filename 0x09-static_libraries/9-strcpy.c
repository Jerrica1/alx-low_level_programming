#include "main.h"

/**
 * _strcpy - Copy the content of a variable
 * @dest: This is destination
 * @src: This is the copy
 *
 * Return: This is the return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
