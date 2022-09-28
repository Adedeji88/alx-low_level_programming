#include "main.h"

/**
 * _strlen_recursion - return str length
 * @s: str
 * Return: str length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
