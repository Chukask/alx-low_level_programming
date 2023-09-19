#include "main.h"
/**
 * swap_int - swapsthe value
 * @a: integer to swap
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
