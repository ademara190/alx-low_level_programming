#include <stdio.h>
/**
 * main - all combinations of numbers
 * no arguments
 * Description: prints all combinations of numbers
 * seperated by comma
 * Return: zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
