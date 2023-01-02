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
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
