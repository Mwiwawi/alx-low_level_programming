#include "main.h"

/**
 * _strcmp - function which compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 *		returns zero if s1 == s2
 *		returns negative number if s1 < s2
 *		returns postive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}

