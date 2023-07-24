#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main - Entry level*/
/* Description: A program that assign random numbers to n variable*/
/* @void: does nothng */
/* Return: Always 0 (success) */
int main(void0)
{
	int
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and greater than 5\n", n);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	return (0);
}
