#include <stdio.h>
/**
 * main - combination of three numbers
 * no arguments
 * Description: prints combination of three numbers
 * Return: returns zero
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = 0; n3 < 10; n3++)
			{
				if (n1 != n2 && n2 != n3 && n3 < n2 && n2 < n1)
				{
					putchar((n1 % 10) + '0');
					putchar((n2 % 10) + '0');
					putchar((n3 % 10) + '0');
					if (n1 + n2 + n3 !=  24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
