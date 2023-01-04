#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putschar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
