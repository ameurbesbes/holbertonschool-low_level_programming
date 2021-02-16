#inculde"holberton.h"
/**
 * _strlen - function returns the length of a string
 * @s: pointer
 * Return: the length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\n' ; i++)
		;
return (i);
}
