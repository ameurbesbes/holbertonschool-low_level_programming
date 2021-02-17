#include "holberton.h"
#include <stdio.h>
/**
* rev_string - reverse a string
* @s: string to reverse
* Return: 0
*/
void rev_string(char *s)
{
	int i, j = 0;
	char c;

	while (s[j] != '\0')
		j++;

	for (i = 0; i <= j / 2; i++)
	{
		c = s[i];
		s[i] = s[(j - 1) - i];
		s[(j - 1) - i] = c;
	}
}
