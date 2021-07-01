#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int j = 0, i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + j) == alp[i])
			{
				*(s + j) = rot13[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
