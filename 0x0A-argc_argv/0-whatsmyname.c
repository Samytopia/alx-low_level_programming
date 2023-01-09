#include <stdio.h>

/**
 * main - function to print program name followed by a new line
 * @argc: argument shows number of argument
 * @argv: argument contains the string array
 * Return: always 0
 */

	int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
