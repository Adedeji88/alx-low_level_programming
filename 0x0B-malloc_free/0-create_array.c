#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creating array of chars, initializing with a specific char
 * @size: array size
 * @c: fill values of array using this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
