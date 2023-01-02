#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	/*Initialize variables for the length of s and accept,*/
	/*and a counter for the number of matching bytes*/
	int s_len = strlen(s);
	int accept_len = strlen(accept);
	int count = 0;

	/*Iterate through s and check if each byte is contained in accept*/
	for (int i = 0; i < s_len; i++)
	{
		for (int j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{

				/*If a match is found, increment the counter*/
				/*and break out of the inner loop*/
				count++;
				break;
			}
		}

		/*If a byte in s is not contained in accept, return the count*/
		if (count != (i + 1))
		{
			return (count);
		}
	}

	/*If all bytes in s are contained in accept, return the length of s*/
	return (s_len);
}
