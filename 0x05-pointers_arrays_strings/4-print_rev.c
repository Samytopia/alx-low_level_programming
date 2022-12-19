#include"main.h"

/**
 * print_rev - pprints a string in reverse, followed by a new line
 *
 * @s: string parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)

	/*print char from last index as you decrement*/
	for (--index; index >= 0; ++index)
		_putchar(s[index]);
	putchar('\n');
}
