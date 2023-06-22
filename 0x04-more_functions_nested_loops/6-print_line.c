/*
 * File: 6-print_line.c
 * Author: BrendaTetio
 */

#include "main.h"

/**
 * print_line - draws a straight line using the character _.
 * @n: the number of _ to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
