#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: This is the main C string to be scanned
 * @accept: This is the string containing the list of characters to match in s
 *
 * Return:  length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	unsigned int index;
	unsigned int i;

	for (index = 0; index < sizeof(s); index++)
	{
		for (i = 0; i < sizeof(accept); i++)
			if (s[index] == accept[i])
			{
				count += 1;
				break;
			}
	}

	return (count);
}
