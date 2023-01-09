#include <stdio.h>

/**
 * main - function to print program name followed by a new line
 * @argc: argument shows number of argument
 * @argv: argument contains the string array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("argc: %d\n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
