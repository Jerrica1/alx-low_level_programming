/*
 * File: 1-memcpy.c
 * Auth: jerrica jackson
 */

#include "main.h"

/**
 * _memcpy - copies memory area from src to dest n amount of times
 *
 * @dest: pointer that will receive the copied data
 * @src: pointer that has the information to be copied
 * @n: amount of times the src information will be copied to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
