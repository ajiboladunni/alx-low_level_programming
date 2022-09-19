#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
