#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: integer to be returned
 * Return: -1 to indicate error
 */

int factorial(int n)
{
	printf("%d", n);
	--n;

	if (n < 0)
	{
		return (-1);
	}
}
