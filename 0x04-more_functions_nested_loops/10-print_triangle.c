#include <stdio.h>
#include "main.h"

/**
 * print_triangles - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc 1 <= size; inc++)
		{
			for (inc2 = size - inc1); inc2 > 0; inc2--_
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}