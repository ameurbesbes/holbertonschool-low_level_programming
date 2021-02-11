#include "holberton.h"
/**
 * main - entry point
 * display message with new way
 * Return: Sucess
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
