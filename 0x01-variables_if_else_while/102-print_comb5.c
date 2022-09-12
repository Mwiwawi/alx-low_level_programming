#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Combination of numbers must be separated by comma, followed by a space
 * Combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are same combination of the numbers 0 and 1
 * You can only use the putchar function
 * You can only use putchar eight times maximum
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: always 0
 */
int main(void)
{
	int first_nums;
	int second_nums;

	for (first_nums = 0; first_nums < 100; first_nums++)
	{
		for (second_nums = first_nums + 1; second_nums < 100; second_nums++)
		{

			putchar(first_nums / 10 + '0');
			putchar(first_nums % 10 + '0');
			putchar(' ');
			putchar(second_nums / 10 + '0');
			putchar(second_nums % 10 + '0');

			if (first_nums == 98 && second_nums == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);
}
