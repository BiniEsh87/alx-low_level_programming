#include "holberton.h"

/**
 *_puts - a function to print strings.
 *@str: a string value to be printed,
 *Return: void doesnt have return value.
 */

void _puts(char *str)
{
int s = 0;

while (str[s] != '\0')
{
_putchar(str[s]);
s++;
}

_putchar('\n');
}
