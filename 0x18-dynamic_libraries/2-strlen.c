#include "main.h"
/**
 * _strlen - gets character string (main function)
 *
 * @s: character to getstring
 * Return: returns string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
