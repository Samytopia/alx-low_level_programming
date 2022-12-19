/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
