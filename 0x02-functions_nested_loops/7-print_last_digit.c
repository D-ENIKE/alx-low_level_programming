#include "main.h"
/**
 *  print_last_digit - print the last digit of a number
 *  @n: last digit
 *  Return: 0 Always (success)
 */
int print_last_digit(int n)
{
	int n, las;

	las = n % 10;

	if (las > 5)
	_putchar('last digit of %d is %d and is greater than 5', n, las);
	else if (las == 0)
	_putchar('last digit of %d is %d and is 0', n, las)
	else if ('las < 6 && las != 0)
	_putchar('last digit of  % d  is  % d  and is less than 6 and not 0', n, las);
	return (0);

}

