#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 9; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
