#include "main.h"
/**
 * print_alphabet_x10(void) - prints lowercase alphabets ten times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++)

{
	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		_putchar(alpha);

	}

	_putchar('\n');
}
}
