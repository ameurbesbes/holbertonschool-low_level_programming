#include"holberton.h"
/**
 * _strspn - Counts bytes from accept in the prefix substring of s
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}

		}
		if (accept[j] == '\0')
			break;
	}
	return (r);

}

