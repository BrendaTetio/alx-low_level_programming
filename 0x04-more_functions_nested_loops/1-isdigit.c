/*
 * File: isdigit.c
 * Author: BrendaTetio
 */
#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 to 9)
 * @c: the number to be checked.
 *
 * Return: return 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

