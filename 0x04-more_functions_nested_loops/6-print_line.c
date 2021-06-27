#include "holberton.h"
/**
 * print_line - print  a line
 * @n: numbers of straigh lines
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
}
