#include "holberton.h"

/**
 *_strlen - it counts length of sting
 *@s: input string
 *Return: returns void
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	count++;
	return (count);
}

