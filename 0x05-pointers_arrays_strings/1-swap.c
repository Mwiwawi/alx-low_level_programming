#include "main.h"

/**
 * swap_int - swaps to integers' value
 * @a: first integer
 * @b: second integer
 * Retunr: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
