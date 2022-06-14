#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;

	}

	return (len);

}

/**
 * idx_num_starts - find index where a digits is first found in string
 * @s: string to search
 * Return: interger index where digit is first found
 */

int idx_num_starts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1);

}

/**
 * find_sign - determine if interger is negative
 * @s: interger
 * Return: integer 1 0r -1
 */
int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (idx_num_starts(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);

}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: interger
 */

int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0)
		return (0);

	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
			&& (idx_digit_starts <= _strlen(s)))
	{
		digits_to_print += 1;
		idx_digit_starts++;

	}

	for (i = digit; 1 < (digit + digits_to_print); i++)

	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);

}
