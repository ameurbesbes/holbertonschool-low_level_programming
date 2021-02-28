#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - entry point
 * @size: triangle size
 * Return: Void
 */
void print_triangle(int size)
{	int i, j, k;
	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		if (i == size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
		}
		else
		{
			for (j = size; j >= i + 1; j--)
			{
			_putchar(' ');
			}
			/*
			 * printing the # in this loop
			*/
			for (k = 1; k <= i; k++)
			{
			_putchar(35);
			}
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
