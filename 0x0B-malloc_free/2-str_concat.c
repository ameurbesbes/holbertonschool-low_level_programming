
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates 2 strings
 * @s1: pointer
 * @s2: pointer
 * Return: s
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, len1 = 0, len2 = 0, x = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
		return (NULL);
	while (x < len1 + len2)
	{
		for (i = 0; i < len1; i++)
		{
			p[x] = s1[i];
			x++;
		}
		for (j = 0; j < len2; j++)
		{
			p[x] = s2[j];
			x++;
		}
	}
	p[x] = '\0';
	return (p);
}
