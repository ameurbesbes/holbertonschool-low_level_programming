#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * display message new way
 * Return: Sucess
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
