#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints all possible diffenrent combination of two digits
 * the two digits must be different
 * 0 and 10 are considered the same combination
 * of the two digits 0 and 1
 * print only the smallestcombination of two digits
 * numbers should be printed in ascending order
 * you can only use putchar, maximum five times
 * you are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
