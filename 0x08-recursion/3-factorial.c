#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: integer to be returned
 * Return: -1 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (0);
	else
	return (n * factorial(n - 1));

}
