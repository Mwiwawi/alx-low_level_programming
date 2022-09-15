#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times \ should be printed
 * diagonal should end with \n
 * If n is 0 or less, the function should only print a \n
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
		putchar('\n');
}

