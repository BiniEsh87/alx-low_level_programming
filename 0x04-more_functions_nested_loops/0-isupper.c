#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase letters.
 * @return 1: means uppercase
 * @retun 0 : means lowercase
 * Return: Always 0.
 */
int _isupper (int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
