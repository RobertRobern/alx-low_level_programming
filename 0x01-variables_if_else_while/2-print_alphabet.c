#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 * 
 * Return: 0 if success
 */

int main()
{
	char ch = 'a';
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	return (0);
}
