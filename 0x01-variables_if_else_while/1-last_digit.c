#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Print the last digit of random generated number and
 * 	checks if greater than 5 or less than 6 and not 0
 *
 * Return: 0 if successful
*/

int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if  ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is geater than 5\n",n ,n % 10);
	
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
