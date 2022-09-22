#include "main.h"
/**
 * _indexOf - returning boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a)
{
	int i;
	char capAr[13] = {' ', '.', ';', ',', '!', '?', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capAr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizing the string
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;

	}
	return (s);
}
