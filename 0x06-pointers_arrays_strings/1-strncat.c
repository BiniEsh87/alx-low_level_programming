#include <stdio.h>
/**
* _strncat- concatenates source with destination to a length n
* @dest-a destination string
* @src-a source string
* @n-integer
* @Return -destination of concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, n;

	for (i = 0; dest[i] != '\0'; i++)
	{};
	for (j = 0; src[j] != '\0' ; &&j < n; j++)
	{
	dest[i + j] = src[j];
	}

	return (dest);
}
