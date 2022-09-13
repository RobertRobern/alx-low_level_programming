#include <stdio.h>

/**
 * main - Print numbers from 00 to 90
 *
 * Return: 0 if success
 */
int main(void)
{
	int l = '0';
	int n = '0';

	while (l <= '9')
	{
		while (n <= '9')
		{
			if (!(l > n || l == n))
			{
				putchar(l);
				putchar(n);
				if (l == '8' && n == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		n = '0';
		l++;
	}

	return (0);
}
