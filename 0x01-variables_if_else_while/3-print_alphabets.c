#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	/* print lowercase letters */

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);

	}

	putchar('\n');

	/* print uppercase letters */

	for (ch = 'A'; ch <= 'z'; ch++)

	{
		putchar(ch);

	}
	putchar('\n');
