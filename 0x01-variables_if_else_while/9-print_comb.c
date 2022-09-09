#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints all possible combinations of single-digit numbers
 * numbers must be separated by , , followed by space
 * numbers should be printed in ascending order
 * you can only use the putchar function
 * four times maximum
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
