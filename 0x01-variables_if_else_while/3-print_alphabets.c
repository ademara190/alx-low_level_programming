#include <stdio.h>
/**
 * main - prints a to z
 * no arguments
 * Description: prints alphabets
 * in lower case
 * and in upper case
 * Return: zero
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
