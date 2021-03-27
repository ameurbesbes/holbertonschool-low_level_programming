#include "holberton.h"
#include <stdio.h>
/**
* clear_bit - sets value of a bit to 0 at a given index.
* @n: pinter to the number
* @index: the given index
* Return: Always 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit;

	if (index > 31)
		return (-1);
	bit = ~(1 << index);
	*n = *n & bit;
		return (1);
}
