#include "main.h"
/**
 * rot13 - encrypting code
 * @s: str to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int x;
	int y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; part1[y] != '\0'; y++)
		{
			if (s[x] == part1[y])
			{
				s[x] = part2[y];
				break;
			}
		}
	}
	return (s);
}

