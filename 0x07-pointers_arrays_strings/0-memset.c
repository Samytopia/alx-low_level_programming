#include "main.h"

/**
 * _memeset - fills memory with a constatnt byte
 * 
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: byte of memory to fill
 *
 * Return: The memory area filled
 */

_memeset(char *s, char b, unsigned int n)

unsigned int a;
{
	for(a = 0; a < n; a++)
	{
		s[a] = b;
	
	}
	return s;
}
