#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * print the alphabet in lowercase
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar("\n");

	return (0);
}
