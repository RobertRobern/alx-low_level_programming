#include <stdio.h>

/**
 * main - Print lowercase alphabet in ascending order
 *
 * Return: 0 if success
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);	
	putchar('\n');	
	return (0);
}
