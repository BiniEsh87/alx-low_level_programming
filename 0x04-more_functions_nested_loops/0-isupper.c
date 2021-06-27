#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase letters.
 * @c: character
 * Return: 0 for upper
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
