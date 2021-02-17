#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: the string to print half
 *
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0, x;

	while (str[len] !=  '\0')
		len++;

	if (len % 2 == 0)
		x = len / 2;
	else
		x = (len / 2) + 1;
	for (i = x; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
