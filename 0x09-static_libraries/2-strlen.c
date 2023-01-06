/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int countlent;

	for (countlent = 0; *s != '\0'; ++s)
	++countlent;

	return (countlent);

}

