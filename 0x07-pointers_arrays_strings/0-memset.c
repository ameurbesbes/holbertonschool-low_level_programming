
#include "holberton.h"
/**
* _memset - fills memory with a constant byte.
* @s: the memory area to print in
* @b: the constant to print
* @n: the num of bytes to fill
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
{
	*(s + i) = b;
	i++;
}
	return (s);
}
