#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * no arguments
 * Description: prints alphabets
 * in reverse
 * Return: zero
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
