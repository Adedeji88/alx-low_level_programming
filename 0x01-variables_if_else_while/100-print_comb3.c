#include <stdio.h>

/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a < 58; a += 1)
	{
		for (b = 48; b < 58; b += 1)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
			if (a == 56 && b == 57)
			{
				break;
			}
			putchar(',');
			putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
