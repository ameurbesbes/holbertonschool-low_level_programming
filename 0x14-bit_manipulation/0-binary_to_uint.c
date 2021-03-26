#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int sum, a, k;
int i, len;
	if (b == NULL)
		return (0);
	len = 0;
	for (i = 0 ; b[i] != '\0' ; i++)
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	len++;
	}
	len--;
	sum = 0;
	k = 1;
	for (i = len ; i >= 0 ; i--)
	{
	if (b[i] == '0')
	a = 0;
	if (b[i] == '1')
	a = 1;
	sum = sum + a * k;
	k = k * 2;
	}
		return (sum);
}
