#include "holberton.h"

/**
 *swap_int - it swaps nums
 *
 *@a: pointer a
 *@b: pointer b
 *Return: returns void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}

