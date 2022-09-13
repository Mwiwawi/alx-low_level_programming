#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums multiples of 3 or 5
 *
 * Description: multiples between 0 and 1024
 * Return: Always(0) Success
 */

int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}

	printf("%i\n", sum);
	return (0);
}
