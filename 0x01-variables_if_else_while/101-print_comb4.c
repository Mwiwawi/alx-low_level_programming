#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of three digits
 * numbers must be separated by ,, followed by a space
 * the three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of digits 0, 1 and 2
 * print only the smallest combination of two digits
 * numbers should be printed in ascending order, with three digits
 * you can only use the putchar function
 * you can only use putchar five times maximum in your code
 * you are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 0)
			{
				if (a != b && b != c && c < b && b < a)
				{
					 putchar('0' + c);
					 putchar('0' + b);
					 putchar('0' + a);

					 if (a + b + c != 9 + 8 + 7)
					 {
						 putchar(',');
						 putchar(' ');
					 }
				}

				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
