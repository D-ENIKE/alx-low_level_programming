#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main- entry
 *  return: 0 (success)
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
}
