#include"holberton.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer
 * Return: nothing
*/
void print_rev(char *s)
{
int i, j = 0, len = 0;
i = 0;
while (s[j++])
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
 }
_putchar('\n');
}
