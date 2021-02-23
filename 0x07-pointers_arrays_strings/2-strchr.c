#include"holberton.h"
#include <stdio.h>
/**
 * _strchr - finds if char occurs in string
 * @s: string to check
 * @c: character to find in s
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if ((*s) == c)
		return (s);
	}
	return (NULL);
}
