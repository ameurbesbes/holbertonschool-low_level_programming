#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: unsigned long int
 * @index: the given index
 * Return: bit at given index else -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	if (index > 31)
		return (-1);
	val = (n >> index) & 1;
		return (val);
}
