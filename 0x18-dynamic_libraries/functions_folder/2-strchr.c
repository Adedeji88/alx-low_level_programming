#include "main.h"
#define NULL 0

/**
 * _strchr - locating 1st occurrence of char in str and returns pointer there
 * @s: string to search
 * @c: target char
 * Return: pointer to that char in str
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
