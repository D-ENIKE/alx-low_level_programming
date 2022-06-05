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
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')

	{
		putchar(lower);
		lower++;

	}

	while (upper <= 'Z')

	{
		putchar(upper);
		upper++;
	}


	putchar('\n');

	return (0);
}
