#include "main.h"
/**
 * _strlen - gets character string (main function)
 *
 * @s: character to getstring
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
