#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program assigns a random number to variable n
 * no arguments
 * Description: assigns a random number ot n
 * prints whether n is negative or not
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n = 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
