#include "main.h"

/**
 * swap_int - swap the value of two intergers
 * @a: interger to swap
 * @b: interger to swap
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
