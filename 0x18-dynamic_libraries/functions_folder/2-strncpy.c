#include "main.h"
/**
 * _strncpy - copies a str
 * @dest: destination to copy
 * @src: source to copy
 * @n: number of places to copy
 * Return: dest value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
