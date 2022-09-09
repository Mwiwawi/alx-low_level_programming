#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints all single digit numbers starting 
 * from base 10 to 0 in a new line
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
