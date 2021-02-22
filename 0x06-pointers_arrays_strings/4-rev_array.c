#include"holberton.h"
/**
 * reverse_array - function that reverses an array of integers
 * @a: pointer
 * @n: number of elements
 * Return: void.
*/
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
	}
}
