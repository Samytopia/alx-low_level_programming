/**
 * rev_string - a function that reverse a string
 *
 * @s: parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, k;
	char ch;

	/*finds string lenght without null character*/
	for (i = 0; s[i] != '\0'; ++i)

	/*swaps string by looping half the string*/
	for (k = 0; k < i / 2; ++k)
	{
		ch = s[k];
		s[k] = s[i - 1 - k]; /*-1 because the array begins from 0*/
		s[i - 1 - k] = ch;
	}

}
