#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps value of two ints
 * @a: integer to be swapped
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	x = *b;

}
