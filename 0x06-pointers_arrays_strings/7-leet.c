#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int j = 0, i;
	int low[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + j) == low[i] || *(s + j) == upper[i])
			{
				*(s + j) = numbers[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
