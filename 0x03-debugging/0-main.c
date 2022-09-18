#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 98;

	if (positive_or_negative(i) > 0)
		printf("%d is positive\n", i);
	else if (positive_or_negative(i) < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}
