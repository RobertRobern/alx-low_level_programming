#include <stdio.h>

/**
 * main - Print lowercase alphabet except q and e
 *
 * Return: 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
