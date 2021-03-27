#include "holberton.h"
#include <stdlib.h>
/**
* set_bit - sets value of a bit to 1 at given index
* @n: pointer to string n
* @index:  index to set bit at
* Return: 1 on success, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 31)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
