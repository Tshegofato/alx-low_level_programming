#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @d: integer to swap
 * @c: integer to swap
 */
void swap_int(int *d, int *c)
{
	int m;

	m = *d;
	*d = *c;
	*c = m;
}

