#include <stdio.h>
/**
 * main - prints two two combination
 * no argument
 * Description: prints two tow combination
 * of numbers from zero to nine
 * Return: returns zero
 */
int main(void)
{
	int c1;
	int c2;
	int num1;
	int num2;
	int num3;
	int num4;

	c1 = 0;
	while (c1 <= 98)
	{
		num1 = (c1 / 10 + '0');
		num2 = (c1 % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			num3 = (c2 / 10 + '0');
			num4 = (c2 % 10 + '0');
			if (c1 < c2)
			{
				putchar(num1);
				putchar(num2);
				putchar(' ');
				putchar(num3);
				putchar(num4);
				if (c1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
