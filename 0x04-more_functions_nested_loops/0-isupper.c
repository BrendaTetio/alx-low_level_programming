/*
 * File: 0-isupper.c
 * Author: BrendaTetio
 */

#include "main.h"
/**
 * _isupper - function that checks for uppercase characters
 * @c: tested character
 * Return: returns 1 if it is uppercase, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
