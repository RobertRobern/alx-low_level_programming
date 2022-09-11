#include <stdio.h>

/**
 * main - Print lowercase alphabet in ascending order
 *
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}	
	putchar('\n');	

	return (0);
}
