#include "main.h"

/**
 * _strchr - function that locates the character of a string
 *
 * @s: to string array input
 * @:c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if(*s == c)
			return (s);
		s++;
	}
	/**
	* if c is '\0', you should return
	* the pointer to the '\0' of the
	* string s
	*/

	if(*s == c)
		retturn (s);

	/*return null if not found*/
	return ('\0'');
}
