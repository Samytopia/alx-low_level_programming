#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we are to copy to
 * @src: where we are copying from
 * @n: what we are copying from @src
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;

	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
