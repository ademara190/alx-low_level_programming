#include <stdio.h>
/**
 * main - prints digits
 * no arguments
 * Description: prints all singles 
 * digits of base ten
 * folowed by new line
 * Return: zero
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
