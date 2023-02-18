#include <stdio.h>
/**
 * main - prints numbers from zer
 * no arguments
 * Description: prints numbers from zero
 * to nine without using char
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i%10) + '0');
	}
	putchar('\n');
	return (0);
}
