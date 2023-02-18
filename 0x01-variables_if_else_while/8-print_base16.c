#include <stdio.h>
/**
 * main - prints all hexadecimal
 * no arguments
 * Description: prints all hexadecimal
 * zero to nine
 * and a to f
 * Return: zero
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
