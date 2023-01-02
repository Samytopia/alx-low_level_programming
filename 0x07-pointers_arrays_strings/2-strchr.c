#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that locates the character of a string
 *
 * @s: to string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
