#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints the alphabet in lowercase, then
 * in uppercase in a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}