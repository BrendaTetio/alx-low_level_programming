/*
 * File: 1-alphabet.c
 * Auth: BrendaTetio
 */


#include "main.h"

/**
 * void print_alphabet(void) - prints the alphabet in lowercase, followed by a new line.
 * char - outlines the variable name.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
