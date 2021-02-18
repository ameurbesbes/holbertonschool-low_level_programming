#include "holberton.h"
/**
* _strcat - concatinates two strings
* @dest: destination string
* @source: source string.
* Return: pointer to src.
*/
char *_strcat(char *dest, char *source)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (source[j] != '\0')
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
