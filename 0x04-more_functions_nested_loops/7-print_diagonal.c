#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input value
 *
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int count;
	int size;

	count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
