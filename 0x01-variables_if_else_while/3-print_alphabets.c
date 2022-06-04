#include <stdio.h>
#include <string>

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

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);

	}

	putchar('\n');

	for (ch = 'A'; ch <= 'z'; ch++)

	{
		putchar(ch);

	}
	putchar('\n');
