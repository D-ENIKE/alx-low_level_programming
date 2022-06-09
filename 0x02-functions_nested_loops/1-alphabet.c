#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Print the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
