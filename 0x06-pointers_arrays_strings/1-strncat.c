#include "holberton.h"
/**
 * _strncat - concat
 *@dest: dest char*
 *@src: source char*
 *@n: integer
 * Return: new concanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && source[j] != '\0')
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
