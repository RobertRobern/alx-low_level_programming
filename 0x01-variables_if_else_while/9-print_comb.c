#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * 	separateed with comma
 *
 * Return: 0 if success
 */
int main(void)
{
	int num;
	
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		
		if (num == 9)
			continue;		
		
		putchar(',');		
		putchar(' ');
	}
		
	putchar('\n');
		
	return (0);
}
