#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
