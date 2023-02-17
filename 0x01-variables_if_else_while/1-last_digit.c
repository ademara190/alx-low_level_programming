#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a random number
 * no arguments
 * Description: prints the last digit
 * of a ranndom number
 * Return: zero
 */
int main(void)
{
	int n;
	int lst_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_d = n % 10;

	if (lst_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_d);
	}
	else if (lst_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_d);
	}
	else if (lst_d < 6 && lst_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_d);
	}
	return (0);
}
