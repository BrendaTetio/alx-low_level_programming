/*
 * File: 7-print_diagonal.c
 * Auth: BrendaTetio
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using \.
 * @n: The number of \ to be printed.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
