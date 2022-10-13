#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name 
 * @name: name of person
 * @f: a pointer to a function that prints a name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

