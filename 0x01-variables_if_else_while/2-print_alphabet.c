#include <stdio.h>
/**
 * main - prints all alphabets in lower
 * case
 * no arguments
 * Description: prints all alphabets in small
 * letters
 * Return: zero
 */
int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
