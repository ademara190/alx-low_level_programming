#include <stdio.h>
/**
 * main - prints alphabets
 * no arguments
 * Description: prints all alphabets
 * except q and e
 * Return: zero
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
