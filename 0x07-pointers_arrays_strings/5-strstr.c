#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in haystack string.
 *
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index;

	if (*needle == 0)
		return (haystack);

	index = 0;

	for (; *haystack; haystack++)
	{
		if (*haystack == needle[index])
		{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			}
		}
	}

	return ('\0');
}
