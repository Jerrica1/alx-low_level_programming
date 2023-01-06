#include "main.h"
#include <stddef.h>
/**
 * _strchr - The is my function
 * @s: This is my string of char
 * @c: This is my character
 * Return: This is my result
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
